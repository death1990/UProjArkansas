#pragma once
#include "CoreMinimal.h"
#include "EStateOfBeing.h"
#include "EventListener.h"
#include "OnStateOfBeingChanged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnStateOfBeingChanged : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateOfBeing StateOfBeing;
    
public:
    UOnStateOfBeingChanged();

};

