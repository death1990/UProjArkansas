#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommand.h"
#include "ECompanionCommandEventTarget.h"
#include "ECompanionCommandEventType.h"
#include "ESpecialObsidianID.h"
#include "EventListener.h"
#include "OnCompanionCommand.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnCompanionCommand : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionCommandEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionCommandEventTarget EventTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID RequiredCompanionId;
    
public:
    UOnCompanionCommand();

};

