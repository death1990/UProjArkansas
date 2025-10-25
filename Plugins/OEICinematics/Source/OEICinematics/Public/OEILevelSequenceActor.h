#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceActor -FallbackName=LevelSequenceActor
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingOverrideData -FallbackName=MovieSceneBindingOverrideData
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
#include "OEILevelSequenceActor.generated.h"

class AActor;
class AOEILevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;
class UObject;

UCLASS(Blueprintable)
class AOEILevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* ReplicatedLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneBindingOverrideData> ReplicatedBindingOverrides;
    
    AOEILevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelSequencePlayer* CreateReplicatedLevelSequencePlayer(UObject* WorldContextObject, FVector Location, ULevelSequence* Sequence, FMovieSceneSequencePlaybackSettings Settings, AOEILevelSequenceActor*& OutActor);
    
    UFUNCTION(BlueprintCallable)
    void AddReplicatedBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);
    
};

