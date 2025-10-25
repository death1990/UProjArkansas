#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SoftSpeakerReference.generated.h"

class USpeakerAsset;

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FSoftSpeakerReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USpeakerAsset> SpeakerAsset;
    
public:
    FSoftSpeakerReference();
};

