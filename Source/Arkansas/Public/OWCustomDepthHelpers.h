#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OWCustomDepthHelpers.generated.h"

class AOwBaseCharacter;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UOWCustomDepthHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOWCustomDepthHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetCustomDepthValue(AOwBaseCharacter* Character, int32 NewValue, bool bModifyChildPrimitives, bool bDisableRenderingIfZero);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomDepthInteractable(UPrimitiveComponent* Component, bool bEnabled);
    
};

