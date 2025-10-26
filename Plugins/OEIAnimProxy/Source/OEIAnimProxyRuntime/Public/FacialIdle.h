#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimationRuntime -ObjectName=RandomDataListEntry -FallbackName=RandomDataListEntry
#include "RandomDataListEntry.h"
#include "FacialIdle.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FFacialIdle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* EyeCadence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* FacialTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomDataListEntry> FacialLoopEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationStrength;
    
    OEIANIMPROXYRUNTIME_API FFacialIdle();
};

