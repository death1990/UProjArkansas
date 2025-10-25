#pragma once
#include "CoreMinimal.h"
#include "OEIAmbientSoundComponent.h"
#include "OEIAmbientSoundComponent_Null.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIVFX_API UOEIAmbientSoundComponent_Null : public UOEIAmbientSoundComponent {
    GENERATED_BODY()
public:
    UOEIAmbientSoundComponent_Null(const FObjectInitializer& ObjectInitializer);

};

