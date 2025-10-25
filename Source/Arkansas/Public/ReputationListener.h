#pragma once
#include "CoreMinimal.h"
#include "EReputationType.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "ReputationListener.generated.h"

class UFactionData;
class UReputationData;

UCLASS(Blueprintable, EditInlineNew)
class UReputationListener : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFactionData> Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReputationType ReputationType;
    
public:
    UReputationListener();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReputationChange(const UFactionData* FactionData, EReputationType InReputationType, int32 Amount, const UReputationData* ReputationBefore, const UReputationData* ReputationAfter);
    
};

