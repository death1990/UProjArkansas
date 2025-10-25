#pragma once
#include "CoreMinimal.h"
#include "EConversationIconType.generated.h"

UENUM(BlueprintType)
enum class EConversationIconType : uint8 {
    Quest,
    Bit,
    ItemTransfer,
    Purchase,
    Dossier,
    Dumb,
    ReputationRank,
    ReputationStanding,
    SpeechAttack,
    GlobalInfo,
    Invalid,
};

