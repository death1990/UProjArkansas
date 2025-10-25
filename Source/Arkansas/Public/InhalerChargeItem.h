#pragma once
#include "CoreMinimal.h"
#include "ResourceItem.h"
#include "InhalerChargeItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInhalerChargeItem : public UResourceItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeAmount;
    
public:
    UInhalerChargeItem();

};

