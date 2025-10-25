#pragma once
#include "CoreMinimal.h"
#include "BaseNotificationObject.h"
#include "NPCFactionNotification.generated.h"

class UFactionData;
class UReputationData;

UCLASS(Blueprintable)
class UNPCFactionNotification : public UBaseNotificationObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFactionData* FactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReputationData* ReputationBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReputationData* ReputationAfter;
    
    UNPCFactionNotification();

};

