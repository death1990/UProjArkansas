#include "OEILevelSequenceActor.h"
#include "Net/UnrealNetwork.h"

AOEILevelSequenceActor::AOEILevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BurnInOptions = NULL;
    this->bReplicatePlayback = true;
    this->ReplicatedLevelSequence = NULL;
}

ULevelSequencePlayer* AOEILevelSequenceActor::CreateReplicatedLevelSequencePlayer(UObject* WorldContextObject, FVector Location, ULevelSequence* Sequence, FMovieSceneSequencePlaybackSettings Settings, AOEILevelSequenceActor*& OutActor) {
    return NULL;
}

void AOEILevelSequenceActor::AddReplicatedBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset) {
}

void AOEILevelSequenceActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOEILevelSequenceActor, ReplicatedLevelSequence);
    DOREPLIFETIME(AOEILevelSequenceActor, ReplicatedBindingOverrides);
}


