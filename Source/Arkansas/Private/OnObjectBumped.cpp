#include "OnObjectBumped.h"

UOnObjectBumped::UOnObjectBumped() {
    this->bDetectCharacters = false;
    this->bDetectDynamicActors = false;
    this->DotCheck = -1.00f;
}

void UOnObjectBumped::OnBumped(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


