#include "StageCameraActor.h"
#include "OEICineCameraComponent.h"

AStageCameraActor::AStageCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UOEICineCameraComponent>(TEXT("CameraComponent"))) {
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}

UOEICineCameraComponent* AStageCameraActor::GetCineCameraComponent() const {
    return NULL;
}


