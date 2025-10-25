#include "RestrictedAreaSign.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "TooltipComponent.h"

ARestrictedAreaSign::ARestrictedAreaSign(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
    this->TooltipComponent = CreateDefaultSubobject<UTooltipComponent>(TEXT("ToolTip"));
    this->CurrentSignageState = ERestrictedAreaState::AccessGranted;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void ARestrictedAreaSign::SetSignageState(ERestrictedAreaState State) {
}

ERestrictedAreaState ARestrictedAreaSign::GetSignageState() {
    return ERestrictedAreaState::AccessGranted;
}


