#include "Door.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "OCLComponent.h"
#include "OwAnimationProxyComponent.h"
#include "OwNavModifierComponent.h"

ADoor::ADoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimProxyComponent = CreateDefaultSubobject<UOwAnimationProxyComponent>(TEXT("AnimationProxyComponent"));
    this->OCLComponent = CreateDefaultSubobject<UOCLComponent>(TEXT("OCL"));
    this->NavModifierComponent = CreateDefaultSubobject<UOwNavModifierComponent>(TEXT("NavModifier"));
    this->TravelTriggerComponent = NULL;
    this->bIsArmored = false;
    this->bExplosivesOnly = false;
    this->PowerfulExplosiveItem = NULL;
    this->bIsCrouch = false;
    this->bRequiresFrontFacingObservation = false;
    this->bInvertExplosion = false;
    this->SprayColorMaterialParameterCollection = NULL;
    this->MaterialParameterCollectionInstance = NULL;
    this->DoorOpenSequenceBase = NULL;
    this->DoorCloseSequenceBase = NULL;
    this->DoorOpenFromJammedSequenceBase = NULL;
    this->DoorJammedByPlayerSequenceBase = NULL;
    this->PlayerJamsDoorMontage = NULL;
    this->InteractionContactPoint = CreateDefaultSubobject<USceneComponent>(TEXT("InteractionContactPoint"));
    this->UnjamTrait = NULL;
    this->bUseLockedDoorNavArea = false;
    this->bFilterNavPathUseYAxisForward = false;
    this->bUseDelayNavUpdate = false;
    this->AnimProxyComponent->SetupAttachment(RootComponent);
    this->InteractionContactPoint->SetupAttachment(RootComponent);
}


bool ADoor::TriggersTravel() const {
    return false;
}

bool ADoor::PassesRPGRequirements(uint8 InteractionIndex) {
    return false;
}

void ADoor::OnOCLStateChange(AActor* Initiator, EOCLState PreviousState, EOCLState CurrentState) {
}

void ADoor::OnInteractBeginAnim(AActor* AnimatingActor) {
}

void ADoor::OnFPVAnimationComplete() {
}

void ADoor::OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent, FName OptionalSocket) {
}

FRPGInteractableRequirements ADoor::GetRPGRequirements(EInteractionType InteractionType) {
    return FRPGInteractableRequirements{};
}


void ADoor::AiOpensJammedDoor(AIndianaAiCharacter* AICharacter) {
}


