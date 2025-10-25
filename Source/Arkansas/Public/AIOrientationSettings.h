#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIOrientationPriorityControlPollDelegate.h"
#include "ETargetInfoRelativeLocation.h"
#include "ETargetInfoSubLocation.h"
#include "AIOrientationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAIOrientationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetInfoRelativeLocation FaceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetInfoSubLocation FaceTargetSubLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FaceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIOrientationPriorityControlPoll ControlPoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    ARKANSAS_API FAIOrientationSettings();
};

