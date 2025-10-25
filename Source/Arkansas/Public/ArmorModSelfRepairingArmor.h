#pragma once
#include "CoreMinimal.h"
#include "ArmorModArmoring.h"
#include "ArmorModSelfRepairingArmor.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UArmorModSelfRepairingArmor : public UArmorModArmoring {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfRepairingArmorRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfRepairingArmorInitialDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfRepairingArmorDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfRepairingArmorDTLoss;
    
public:
    UArmorModSelfRepairingArmor();

};

