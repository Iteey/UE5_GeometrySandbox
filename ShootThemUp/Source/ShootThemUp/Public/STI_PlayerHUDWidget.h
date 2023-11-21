// Shoot Them Up Game, All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "STI_PlayerHUDWidget.generated.h"


/**
 * 
 */
UCLASS()
class SHOOTTHEMUP_API USTI_PlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()

	public:
    UFUNCTION(BlueprintCallable, Category = "UI")
      float GetHealthPercent() const;
	
};
