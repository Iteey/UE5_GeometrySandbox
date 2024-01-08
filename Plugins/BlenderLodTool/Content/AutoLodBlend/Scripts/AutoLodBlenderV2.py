import bpy
import bmesh
import math
import os
import configparser
from bpy.props import CollectionProperty, FloatProperty, IntProperty

class LODSettings(bpy.types.PropertyGroup):
    ratio: FloatProperty(
        name="Ratio",
        default=1.0,
        min=0.01,
        max=1.0,
        description="Decimate Ratio for LOD"
    )

class AddLODOperator(bpy.types.Operator):
    bl_idname = "lod.add"
    bl_label = "Add LOD"

    def execute(self, context):
        # Add a new LOD to the collection
        context.scene.lod_settings.add()
        return {'FINISHED'}

class RemoveLODOperator(bpy.types.Operator):
    bl_idname = "lod.remove"
    bl_label = "Remove LOD"
    index: IntProperty()

    def execute(self, context):
        # Remove LOD from the collection by index
        context.scene.lod_settings.remove(self.index)
        return {'FINISHED'}

class ExportLODsOperator(bpy.types.Operator):
    bl_idname = "export.lods"
    bl_label = "Export LODs"

    def execute(self, context):
        # Set the export path
        export_path = "../../../../Content/LodTool/BlenderLods/"

        # Iterate over selected objects
        for obj in bpy.context.selected_objects:
            # Create a folder for the object if it doesn't exist
            folder_name = f"{obj.name}_LODs"
            folder_path = os.path.join(export_path, folder_name)
            os.makedirs(folder_path, exist_ok=True)

            # Select the current object
            bpy.context.view_layer.objects.active = obj

            # Iterate over LODs and export
            for i, lod_setting in enumerate(context.scene.lod_settings):
                # Create a Decimate modifier
                bpy.ops.object.modifier_add(type='DECIMATE')
                decimate_modifier = obj.modifiers.new(name="Decimate", type='DECIMATE')

                # Set Decimate modifier ratio from LODSettings
                decimate_modifier.ratio = lod_setting.ratio

                # Apply the modifier
                bpy.ops.object.modifier_apply({"object": obj}, modifier="Decimate")

                # Export to FBX
                export_filename = os.path.join(folder_path, f"{obj.name}_lod{i + 1}.fbx")
                bpy.ops.export_scene.fbx(filepath=export_filename, use_selection=True, axis_forward='Y', axis_up='Z')

                # Remove the Decimate modifier
                obj.modifiers.remove(decimate_modifier)

        return {'FINISHED'}

class ResetLODOperator(bpy.types.Operator):
    bl_idname = "lod.reset"
    bl_label = "Reset LODs"

    def execute(self, context):
        # Clear all LOD settings
        context.scene.lod_settings.clear()
        return {'FINISHED'}

class CreateConfigOperator(bpy.types.Operator):
    bl_idname = "lod.create_config"
    bl_label = "Create Config"

    def execute(self, context):
        # Set the export path
        export_path = "../../../../Content/LodTool/BlenderLods"

        # Create a config file
        config_file_path = os.path.join(export_path, "lod_config.ini")
        config = configparser.ConfigParser()
        config['LODSettings'] = {}
        for i, lod_setting in enumerate(context.scene.lod_settings):
            config['LODSettings'][f'LOD{i + 1}Ratio'] = str(lod_setting.ratio)

        # Save the config file
        with open(config_file_path, 'w') as configfile:
            config.write(configfile)

        return {'FINISHED'}

class ExportLODsFromConfigOperator(bpy.types.Operator):
    bl_idname = "export.lods_from_config"
    bl_label = "Export LODs from Config"

    def execute(self, context):
        # Set the export path
        export_path = "../../../../Content/LodTool/BlenderLods"

        # Check if a config file exists
        config_file_path = os.path.join(export_path, "lod_config.ini")
        if os.path.exists(config_file_path):
            # Load settings from the config file
            config = configparser.ConfigParser()
            config.read(config_file_path)
            if 'LODSettings' in config:
                # Clear existing LOD settings
                context.scene.lod_settings.clear()

                # Add LOD settings from the config file
                for i in range(1, 11):
                    ratio_key = f'LOD{i}Ratio'
                    if ratio_key in config['LODSettings']:
                        ratio_value = config['LODSettings'].getfloat(ratio_key)
                        context.scene.lod_settings.add().ratio = ratio_value

        # Iterate over selected objects
        for obj in bpy.context.selected_objects:
            # Create a folder for the object if it doesn't exist
            folder_name = f"{obj.name}_LODs"
            folder_path = os.path.join(export_path, folder_name)
            os.makedirs(folder_path, exist_ok=True)

            # Select the current object
            bpy.context.view_layer.objects.active = obj

            # Iterate over LODs and export
            for i, lod_setting in enumerate(context.scene.lod_settings):
                # Create a Decimate modifier
                bpy.ops.object.modifier_add(type='DECIMATE')
                decimate_modifier = obj.modifiers.new(name="Decimate", type='DECIMATE')

                # Set Decimate modifier ratio from LODSettings
                decimate_modifier.ratio = lod_setting.ratio

                # Apply the modifier
                bpy.ops.object.modifier_apply({"object": obj}, modifier="Decimate")

                # Export to FBX
                export_filename = os.path.join(folder_path, f"{obj.name}_lod{i + 1}.fbx")
                bpy.ops.export_scene.fbx(filepath=export_filename, use_selection=True, axis_forward='Y', axis_up='Z')

                # Remove the Decimate modifier
                obj.modifiers.remove(decimate_modifier)

        return {'FINISHED'}

class MarkSharpAnglesOperator(bpy.types.Operator):
    bl_idname = "object.mark_sharp_angles"
    bl_label = "Mark Sharp Angles"

    def execute(self, context):
        # Specify the desired angle (in radians)
        desired_angle = math.radians(30)

        # Get the active object (must be of type 'MESH')
        obj = bpy.context.active_object

        # Switch to Edit Mode
        bpy.ops.object.mode_set(mode='EDIT')

        # Get the BMesh
        mesh = bmesh.from_edit_mesh(obj.data)

        # Clear all sharp edges
        for edge in mesh.edges:
            edge.smooth = True

        # Iterate over all faces
        for face in mesh.faces:
            normal = face.normal
            for edge in face.edges:
                adjacent_faces = edge.link_faces
                if len(adjacent_faces) == 2:
                    angle = normal.angle(adjacent_faces[0].normal)
                    if angle > desired_angle:
                        # Set sharp edge
                        edge.smooth = False

        # Update the BMesh
        bmesh.update_edit_mesh(obj.data)

        # Switch back to Object Mode
        bpy.ops.object.mode_set(mode='OBJECT')

        return {'FINISHED'}

class MassExportLODsOperator(bpy.types.Operator):
    bl_idname = "export.mass_lods"
    bl_label = "Mass Export LODs"

    def execute(self, context):
        # Set the export path
        export_path = "../../../../Content/LodTool/BlenderLods"

        # Deselect all objects
        bpy.ops.object.select_all(action='DESELECT')

        # Iterate over all objects on the scene
        for obj in bpy.context.scene.objects:
            # Check if the object is a mesh
            if obj.type == 'MESH':
                # Deselect all objects
                bpy.ops.object.select_all(action='DESELECT')

                # Select the current object
                obj.select_set(True)
                bpy.context.view_layer.objects.active = obj

                # Iterate over LODs and export
                for i, lod_setting in enumerate(context.scene.lod_settings):
                    # Create a Decimate modifier
                    bpy.ops.object.modifier_add(type='DECIMATE')
                    decimate_modifier = obj.modifiers.new(name="Decimate", type='DECIMATE')

                    # Set Decimate modifier ratio from LODSettings
                    decimate_modifier.ratio = lod_setting.ratio

                    # Apply the modifier
                    bpy.ops.object.modifier_apply({"object": obj}, modifier="Decimate")

                    # Export to FBX
                    folder_name = f"{obj.name}_LODs"
                    folder_path = os.path.join(export_path, folder_name)
                    os.makedirs(folder_path, exist_ok=True)
                    export_filename = os.path.join(folder_path, f"{obj.name}_lod{i + 1}.fbx")
                    bpy.ops.export_scene.fbx(filepath=export_filename, use_selection=True, axis_forward='Y', axis_up='Z')

                    # Remove the Decimate modifier
                    obj.modifiers.remove(decimate_modifier)

        return {'FINISHED'}

class ImportObjectsOperator(bpy.types.Operator):
    bl_idname = "import.objects"
    bl_label = "Import Objects"
    bl_options = {'REGISTER', 'UNDO'}

    def execute(self, context):
        # Set the import path
        import_path = os.path.join("../../../../Content/LodTool/UE5_Meshes")

        # Check if the import folder exists
        if os.path.exists(import_path):
            # Deselect all objects
            bpy.ops.object.select_all(action='DESELECT')

            # Iterate over files in the import folder
            for file_name in os.listdir(import_path):
                file_path = os.path.join(import_path, file_name)
                if file_name.lower().endswith(('.fbx', '.gltf')):
                    # Import the object
                    bpy.ops.import_scene.fbx(filepath=file_path) if file_name.lower().endswith('.fbx') else bpy.ops.import_scene.gltf(filepath=file_path)

        return {'FINISHED'}

class SimplePanel(bpy.types.Panel):
    bl_label = "Export LODs"
    bl_idname = "PT_SimplePanel"
    bl_space_type = 'VIEW_3D'
    bl_region_type = 'UI'
    bl_category = 'Tools'

    def draw(self, context):
        layout = self.layout

        # Add LOD button
        layout.operator("lod.add", text="Add LOD", icon='PLUS')

        # LOD settings
        for i, lod_setting in enumerate(context.scene.lod_settings):
            row = layout.row()
            row.prop(lod_setting, "ratio", text=f"LOD {i + 1} Ratio")
            row.operator("lod.remove", text="", icon='X').index = i

        # LOD count and export button
        layout.operator("export.lods", text="Export LODs", icon='EXPORT')

        # Mass Export LODs button
        layout.operator("export.mass_lods", text="Mass Export LODs", icon='EXPORT')

        # Import Objects button
        layout.operator("import.objects", text="Import Objects", icon='IMPORT')

        # Reset LOD button
        layout.operator("lod.reset", text="Reset LODs", icon='CANCEL')

        # Create Config button
        layout.operator("lod.create_config", text="Create Config", icon='FILE_NEW')

        # Export LODs from Config button
        layout.operator("export.lods_from_config", text="Export LODs from Config", icon='EXPORT')

        # Mark Sharp Angles button
        layout.operator("object.mark_sharp_angles", text="Mark Sharp Angles", icon='SNAP_NORMAL')

def register():
    bpy.utils.register_class(LODSettings)
    bpy.utils.register_class(AddLODOperator)
    bpy.utils.register_class(RemoveLODOperator)
    bpy.utils.register_class(ExportLODsOperator)
    bpy.utils.register_class(ResetLODOperator)
    bpy.utils.register_class(CreateConfigOperator)
    bpy.utils.register_class(ExportLODsFromConfigOperator)
    bpy.utils.register_class(MarkSharpAnglesOperator)
    bpy.utils.register_class(MassExportLODsOperator)
    bpy.utils.register_class(ImportObjectsOperator)
    bpy.utils.register_class(SimplePanel)

    bpy.types.Scene.lod_settings = CollectionProperty(type=LODSettings)

def unregister():
    bpy.utils.unregister_class(LODSettings)
    bpy.utils.unregister_class(AddLODOperator)
    bpy.utils.unregister_class(RemoveLODOperator)
    bpy.utils.unregister_class(ExportLODsOperator)
    bpy.utils.unregister_class(ResetLODOperator)
    bpy.utils.unregister_class(CreateConfigOperator)
    bpy.utils.unregister_class(ExportLODsFromConfigOperator)
    bpy.utils.unregister_class(MarkSharpAnglesOperator)
    bpy.utils.unregister_class(MassExportLODsOperator)
    bpy.utils.unregister_class(ImportObjectsOperator)
    bpy.utils.unregister_class(SimplePanel)

    # Cleanup LOD settings
    for scene in bpy.data.scenes:
        if hasattr(scene, "lod_settings"):
            del scene["lod_settings"]

if __name__ == "__main__":
    register()
