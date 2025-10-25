#include "OEIAmbientFXActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "OEIAmbientSoundComponent_Wwise.h"
#include "OEIInstancedNiagaraComponent.h"

AOEIAmbientFXActor::AOEIAmbientFXActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root Component"));
    this->AmbientNiagaraSystem = NULL;
    this->AmbientSoundManager = CreateDefaultSubobject<UOEIAmbientSoundComponent_Wwise>(TEXT("AmbientSoundManager_Wwise"));
    this->BoxBound = (UBoxComponent*)RootComponent;
    this->InstancedNiagaraComponent = CreateDefaultSubobject<UOEIInstancedNiagaraComponent>(TEXT("InstancedNiagaraComponent"));
    this->AmbientSoundManager->SetupAttachment(RootComponent);
    this->InstancedNiagaraComponent->SetupAttachment(RootComponent);
}

void AOEIAmbientFXActor::UpdateSystem(bool bForceUpdate) {
}

void AOEIAmbientFXActor::SetInstanceRotation(int32 Index, FQuat Rotation) {
}

void AOEIAmbientFXActor::SetInstanceLocation(int32 Index, FVector Location) {
}

void AOEIAmbientFXActor::SetAudioEnabled(bool bInAudioEnabled) {
}

void AOEIAmbientFXActor::RemoveInstance(int32 Index) {
}

void AOEIAmbientFXActor::RemoveAllInstances() {
}

bool AOEIAmbientFXActor::IsAudioEnabled() const {
    return false;
}

int32 AOEIAmbientFXActor::InstanceCount() const {
    return 0;
}

TArray<FTransform> AOEIAmbientFXActor::GetInstanceTransforms() const {
    return TArray<FTransform>();
}

UOEIInstancedNiagaraComponent* AOEIAmbientFXActor::GetInstancedNiagaraComponent() const {
    return NULL;
}

UOEIAmbientSoundComponent* AOEIAmbientFXActor::GetAmbientSoundManager() {
    return NULL;
}

void AOEIAmbientFXActor::ForceUpdateSystem() {
}

int32 AOEIAmbientFXActor::AddInstance(const FTransform& Transform) {
    return 0;
}


