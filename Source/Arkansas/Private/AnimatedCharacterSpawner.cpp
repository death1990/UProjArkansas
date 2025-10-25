#include "AnimatedCharacterSpawner.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AAnimatedCharacterSpawner::AAnimatedCharacterSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimationSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
    this->OpeningMontage = NULL;
    this->ClosingMontage = NULL;
    this->bStayOpenWhenCapped = false;
    this->AnimationDeactivationTime = 0.50f;
    this->AnticipationDelay = 0.00f;
    this->AnimationSkeletalMesh->SetupAttachment(RootComponent);
}

bool AAnimatedCharacterSpawner::ShouldStayOpenWhenCapped() const {
    return false;
}


void AAnimatedCharacterSpawner::OnSpawnerEnable_Implementation() {
}

void AAnimatedCharacterSpawner::OnSpawnerDisable_Implementation() {
}


void AAnimatedCharacterSpawner::OnSpawnerAnticipateOpening_Implementation(float AnticipationTime) {
}

void AAnimatedCharacterSpawner::OnSerializeOpen_Implementation(bool bOpen) {
}

void AAnimatedCharacterSpawner::OnAnimationStarted(UAnimMontage* AnimMontage) {
}

void AAnimatedCharacterSpawner::OnAnimationComplete(UAnimMontage* AnimMontage, bool bInterrupted) {
}


