#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CinematicsRuntimeSpeakerGenerationData.h"
#include "CinematicRuntimeData.generated.h"

class UObject;

UCLASS(Blueprintable)
class OEICINEMATICS_API UCinematicRuntimeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UObject*> ConversationIdleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FCinematicsRuntimeSpeakerGenerationData> GeneratedSpeakerData;
    
    UCinematicRuntimeData();

};

