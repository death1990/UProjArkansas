#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_SequencePlayer -FallbackName=AnimNode_SequencePlayer
#include "AnimNode_LocomotionPlay.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FAnimNode_LocomotionPlay : public FAnimNode_SequencePlayer {
    GENERATED_BODY()
public:
    FAnimNode_LocomotionPlay();
};

