#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "CinematicsRuntimeSpeakerGenerationData.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FCinematicsRuntimeSpeakerGenerationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> GestureIdles;
    
    FCinematicsRuntimeSpeakerGenerationData();
};

