#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "EventListener.h"
#include "OnSpotterPerkTriggered.generated.h"

class AIndianaAiCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnSpotterPerkTriggered : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionID;
    
public:
    UOnSpotterPerkTriggered();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpotterPerkTriggered(const AIndianaAiCharacter* Actor);
    
};

