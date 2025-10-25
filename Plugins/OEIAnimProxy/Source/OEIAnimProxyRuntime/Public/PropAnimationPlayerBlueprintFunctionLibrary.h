#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PropAnimationPlayer.h"
#include "PropAnimationPlayerBlueprintFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPropAnimationPlayerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPropAnimationPlayerBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void InitializePropAnimPlayer(UPARAM(Ref) FPropAnimationPlayer& InPropAnimPlayer, AActor* OwningActor);
    
};

