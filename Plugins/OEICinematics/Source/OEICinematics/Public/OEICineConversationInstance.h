#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ConversationNavigatorState -FallbackName=ConversationNavigatorState
#include "ResolvedSpeaker.h"
#include "StageMark.h"
#include "OEICineConversationInstance.generated.h"

class AActor;
class AStagePrefabActor;
class UCinematicData;
class UCinematicRuntimeData;
class UOEICinePresentationMode;
class UStagePrefabAsset;

UCLASS(Blueprintable)
class OEICINEMATICS_API UOEICineConversationInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicData* CinematicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CachedWorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FResolvedSpeaker SpeakingSpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FResolvedSpeaker ListeningSpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LifetimeSpeakerActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationNavigatorState NavigatorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStagePrefabActor* Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStagePrefabAsset* StageAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicRuntimeData* CinematicRuntimeDataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOEICinePresentationMode* PresentationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStageMark> StageMarks;
    
public:
    UOEICineConversationInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_GetSpeakingSpeaker(FGuid& SpeakerID, AActor*& Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_GetListeningSpeaker(FGuid& SpeakerID, AActor*& Actor) const;
    
};

