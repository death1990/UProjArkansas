#pragma once
#include "CoreMinimal.h"
#include "ECompanionRegistrationEventType.h"
#include "ESpecialObsidianID.h"
#include "EventListener.h"
#include "OnCompanionRegistrationChanged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnCompanionRegistrationChanged : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionRegistrationEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnAnyCompanion;
    
public:
    UOnCompanionRegistrationChanged();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompanionRegistrationChanged(ESpecialObsidianID SpecialObsidianID);
    
};

