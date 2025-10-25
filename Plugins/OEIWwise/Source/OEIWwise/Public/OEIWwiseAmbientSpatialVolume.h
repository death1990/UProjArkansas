#pragma once
#include "CoreMinimal.h"
#include "OEIWwiseAmbientVolume.h"
#include "OEIWwiseAmbientSpatialVolume.generated.h"

class UAkLateReverbComponent;
class UAkRoomComponent;
class UAkSurfaceReflectorSetComponent;

UCLASS(Blueprintable)
class AOEIWwiseAmbientSpatialVolume : public AOEIWwiseAmbientVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* LateReverb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkRoomComponent* Room;
    
    AOEIWwiseAmbientSpatialVolume(const FObjectInitializer& ObjectInitializer);

};

