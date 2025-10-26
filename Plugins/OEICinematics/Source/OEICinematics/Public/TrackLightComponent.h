#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "TrackLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEICINEMATICS_API UTrackLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureIntesity;
    
public:
    UTrackLightComponent(const FObjectInitializer& ObjectInitializer);

};

