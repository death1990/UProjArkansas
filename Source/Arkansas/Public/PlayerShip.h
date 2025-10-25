#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ESpecialObsidianID.h"
#include "PlayerShip.generated.h"

class AIndianaAiCharacter;
class ULevelSequence;
class UShipDestinationData;

UCLASS(Blueprintable)
class APlayerShip : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* TakeoffSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LandingSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialObsidianID, TSoftObjectPtr<AIndianaAiCharacter>> ShipDefaultCompanionInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShipDestinationData* ShipDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysActive;
    
public:
    APlayerShip(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetCutsceneHidden(bool bNewCutsceneHidden);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeoffSequenceComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakeoffCompleteBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakeoffBeginBP();
    
    UFUNCTION(BlueprintCallable)
    void OnLandingSequenceComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLandingCompleteBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLandingBeginBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiCharacter* GetActiveCompanionInstance(ESpecialObsidianID SpecialID, bool bIgnoreStasised) const;
    
};

