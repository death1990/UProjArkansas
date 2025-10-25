#include "MeleeMode.h"
#include "MeleeSequencer.h"

UMeleeMode::UMeleeMode() {
    this->HoldDuration = 0.65f;
    this->HoldDurationMidair = 0.65f;
    this->bActiveSecondaryModeDuringPowerAttack = false;
    this->AnimationSpeed = 1.00f;
    this->ApproximateSwingTime = 1.00f;
    this->DefaultCollision = NULL;
    this->DefaultHitReactionType = EHitReactType::Light;
    this->SweepHitReactionType = EHitReactType::Light;
    this->PowerHitReactionType = EHitReactType::Heavy;
    this->SpecialAttackHitReactionType = EHitReactType::Heavy;
    this->MeleeSequencer = CreateDefaultSubobject<UMeleeSequencer>(TEXT("MeleeSequencer"));
    this->MaxImpactDistance = 200.00f;
    this->bHasStealthAnims = false;
    this->MaxChainSwings = 3;
    this->PowerAttackWindUpStat = NULL;
    this->bAllowSurfaceImpacts = true;
}

void UMeleeMode::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}


