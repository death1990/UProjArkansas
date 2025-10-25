#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AnimationProxyUtils.generated.h"

class AAnimationProxyActor;
class AIndianaCharacter;

UCLASS(Blueprintable)
class UAnimationProxyUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationProxyUtils();

    UFUNCTION(BlueprintCallable)
    static bool GetAnimationProxySlotEntryLocationWithSlotIndex(const AAnimationProxyActor* AnimationProxyActor, const FGameplayTag SlotKey, const AIndianaCharacter* Context, FVector& OutEntryLocation, int32& SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAnimationProxySlotEntryLocation(const AAnimationProxyActor* AnimationProxyActor, const FGameplayTag SlotKey, const AIndianaCharacter* Context, FVector& OutEntryLocation);
    
};

