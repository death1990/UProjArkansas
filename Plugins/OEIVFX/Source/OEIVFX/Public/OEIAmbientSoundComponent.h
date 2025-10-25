#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "OEIAmbientSoundComponent.generated.h"

class AOEIAmbientFXActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIVFX_API UOEIAmbientSoundComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UOEIAmbientSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AOEIAmbientFXActor* GetOwnerAmbientFXActor();
    
};

