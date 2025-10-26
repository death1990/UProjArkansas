#pragma once
#include "CoreMinimal.h"
#include <SpeakerReference.h>
#include "StageMark.generated.h"

class AActor;
class AStageMarkActor;

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FStageMark {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStageMarkActor* MarkActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakerReference Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpeakerActor;
    
    FStageMark();
};

