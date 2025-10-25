#include "EnvironmentalDistraction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EnvironmentalDistractionComponent.h"
#include "InteractableComponent.h"

AEnvironmentalDistraction::AEnvironmentalDistraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->DistractionComponent = CreateDefaultSubobject<UEnvironmentalDistractionComponent>(TEXT("EnvironmentalDistraction"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->DefaultDistractionState = EDistractionDeviceState::Off;
    this->bCanBeSeen = false;
    this->DistractionRadius = 1000.00f;
    this->bContinuousDistraction = false;
    this->DistractionInterval = 3.00f;
    this->Lifetime = -1.00f;
    this->DistractionTime = 0.00f;
    this->bShouldFireThresholdEvent = false;
    this->LifeTimeEventThresholdPercentage = 0.00f;
    this->LifeTimer = 0.00f;
    this->SwitchedTargetTimeRemaining = 5.00f;
    this->bShouldDestroyOnInteract = false;
    this->bShouldPlayDeathVFX = true;
    this->ChatterParam = EDistractionDeviceTypeChatterParam::VendingMachine;
    this->bChatterEnabled = false;
    this->DistractionState = EDistractionDeviceState::Off;
    this->InteractableComponent->SetupAttachment(RootComponent);
}

void AEnvironmentalDistraction::SetDistractionState(EDistractionDeviceState InDistractionState) {
}

void AEnvironmentalDistraction::K2_SetCurrentDistractee(AIndianaAiCharacter* InCurrentDistractee) {
}

bool AEnvironmentalDistraction::K2_HasChatterParam() const {
    return false;
}

float AEnvironmentalDistraction::K2_GetDistractionTime() const {
    return 0.0f;
}

AIndianaAiCharacter* AEnvironmentalDistraction::K2_GetCurrentDistractee() const {
    return NULL;
}

int32 AEnvironmentalDistraction::K2_GetChatterParam() const {
    return 0;
}

TArray<EInteractionType> AEnvironmentalDistraction::GetInteractions(const FInteractionDescription& Description) const {
    return TArray<EInteractionType>();
}

EDistractionDeviceState AEnvironmentalDistraction::GetDistractionState() const {
    return EDistractionDeviceState::Off;
}

void AEnvironmentalDistraction::CompleteInteract(const FInteractionDescription& InteractionDescription) {
}

bool AEnvironmentalDistraction::CanInteract(AIndianaCharacter* Initiator, const FInteractPayload& Payload) const {
    return false;
}


