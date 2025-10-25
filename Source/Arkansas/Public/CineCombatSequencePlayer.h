#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequencePlayer -FallbackName=LevelSequencePlayer
#include "CineCombatSequencePlayer.generated.h"

UCLASS(Blueprintable)
class UCineCombatSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UCineCombatSequencePlayer();

};

