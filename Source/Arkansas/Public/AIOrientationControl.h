#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ETargetInfoRelativeLocation.h"
#include "ETargetInfoSubLocation.h"
#include "AIOrientationControl.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAIOrientationControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetInfoRelativeLocation FaceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetInfoSubLocation FaceTargetSubLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FaceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FaceActor;
    
    ARKANSAS_API FAIOrientationControl();
};

