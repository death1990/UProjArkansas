#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_HasOOCSettingBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UBTDecorator_HasOOCSettingBase : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeDefaultBehavior;
    
public:
    UBTDecorator_HasOOCSettingBase();

};

