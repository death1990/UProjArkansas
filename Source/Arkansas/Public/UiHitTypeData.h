#pragma once
#include "CoreMinimal.h"
#include "EIndianaAudioEvent.h"
#include "UiHitTypeData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FUiHitTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DisplayTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndianaAudioEvent AudioEvent;
    
    ARKANSAS_API FUiHitTypeData();
};

