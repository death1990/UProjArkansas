#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SpeakerReference.generated.h"

class USpeakerAsset;

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FSpeakerReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpeakerAsset* SpeakerAsset;
    
public:
    FSpeakerReference();
};
FORCEINLINE uint32 GetTypeHash(const FSpeakerReference) { return 0; }

