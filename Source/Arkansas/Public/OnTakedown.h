#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnTakedown.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnTakedown : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillOnly;
    
public:
    UOnTakedown();

};

