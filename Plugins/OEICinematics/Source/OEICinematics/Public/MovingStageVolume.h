#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MovingStageVolume.generated.h"

class UMovingStageBoxComponent;

UCLASS(Blueprintable)
class OEICINEMATICS_API AMovingStageVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovingStageBoxComponent* BoxComponent;
    
    AMovingStageVolume(const FObjectInitializer& ObjectInitializer);

};

