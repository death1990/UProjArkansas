#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnInteractionAnimProxySkippedDelegate.generated.h"

class AIndianaPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionAnimProxySkipped, AIndianaPlayerCharacter*, PlayerCharacter, const FGameplayTag&, SkippedAnimProxyKey);

