#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OEICineShotTrackPreviewer.generated.h"

class UActorComponent;
class UOEICineShotTrackPreviewComponent;
class UOEICinematicCameraModifier;

UCLASS(Blueprintable)
class OEICINEMATICS_API AOEICineShotTrackPreviewer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEICineShotTrackPreviewComponent* PreviewComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOEICinematicCameraModifier* PreviewModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* TargetVisualizationComponent;
    
    AOEICineShotTrackPreviewer(const FObjectInitializer& ObjectInitializer);

};

