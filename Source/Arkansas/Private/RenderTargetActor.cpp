#include "RenderTargetActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ARenderTargetActor::ARenderTargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->TVStaticValue = 0.00f;
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->StandbyMatInterface = NULL;
    this->RenderTargetMatInterface = NULL;
    this->ImageMatInterface = NULL;
    this->RenderTargetMatIndex = 0;
    this->ActivationTime = 1.00f;
    this->bCanAnimateStatic = false;
    this->bAutoActivate = true;
    this->bAnimateCPDs = true;
}

void ARenderTargetActor::ShowImage(TSoftObjectPtr<UTexture> ImageTexture, int32 ClearNodeID) {
}

void ARenderTargetActor::SetRenderShown(bool bNewRenderShown, FSpeakerReference Speaker) {
}

void ARenderTargetActor::OnEnteredNode(const FConversationNavigator& Navigator, const FFlowChartNode& Node, bool bIsFirstVisit) {
}

void ARenderTargetActor::HideImage() {
}


