#include "CineCombatSequenceActor.h"
#include "CineCombatSequencePlayer.h"

ACineCombatSequenceActor::ACineCombatSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCineCombatSequencePlayer>(TEXT("AnimationPlayer"))) {
    this->CameraParams = NULL;
}


