#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnBodyPartHealthChangedDelegate.generated.h"

class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnBodyPartHealthChanged, UHealthComponent*, HealthComponent, FGameplayTag, BodyPart, float, OldHealthNormalized, float, NewHealthNormalized);

