#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "EAIDisableMask.h"
#include "BTDecorator_IsDisableFlagSet.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsDisableFlagSet : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIDisableMask DisableFlag;
    
public:
    UBTDecorator_IsDisableFlagSet();

};

