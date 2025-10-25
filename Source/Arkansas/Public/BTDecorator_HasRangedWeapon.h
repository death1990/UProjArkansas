#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_HasRangedWeapon.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_HasRangedWeapon : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckEquipped;
    
public:
    UBTDecorator_HasRangedWeapon();

};

