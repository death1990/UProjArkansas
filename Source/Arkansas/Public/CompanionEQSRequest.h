#pragma once
#include "CoreMinimal.h"
#include "CompanionDistanceSetting.h"
#include "CompanionEQSRequest.generated.h"

class UEQSRequest_IndianaBase;

USTRUCT(BlueprintType)
struct FCompanionEQSRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEQSRequest_IndianaBase* EQSRequest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionDistanceSetting DistanceSettings[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementDistanceThreshold;
    
    ARKANSAS_API FCompanionEQSRequest();
};

