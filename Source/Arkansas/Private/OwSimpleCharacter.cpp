#include "OwSimpleCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICharacterCustomization -ObjectName=OEICCSkeletalMeshComponent -FallbackName=OEICCSkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent
#include "InteractableComponent.h"

AOwSimpleCharacter::AOwSimpleCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UOEICCSkeletalMeshComponent>(TEXT("CharacterMesh0"))) {
    this->bAlwaysAllowHighlight = false;
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("InteractableComponent"));
    this->IDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    FProperty* p_Mesh_Prior = GetClass()->FindPropertyByName("Mesh");
    this->TPVMesh = (USkeletalMeshComponent*)*p_Mesh_Prior->ContainerPtrToValuePtr<UOEICCSkeletalMeshComponent*>(this);
    this->VoiceOverAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("VoiceOverFaceFXExternalAudio"));
    this->SpeakerInfoComponent = NULL;
    this->DynamicFxInput = CreateDefaultSubobject<UAkComponent>(TEXT("DynamicFxInputAkComponent"));
    this->DynamicFxOutput = CreateDefaultSubobject<UAkComponent>(TEXT("DynamicFxOutputAkComponent"));
    this->DynamicFxInput->SetupAttachment(Mesh);
    this->DynamicFxOutput->SetupAttachment(Mesh);
    this->InteractableComponent->SetupAttachment(GroundOffsetComponent);
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(GroundOffsetComponent);
    this->TPVMesh->SetupAttachment(GroundOffsetComponent);
    this->VoiceOverAudioComponent->SetupAttachment(Mesh);
}


