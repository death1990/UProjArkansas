#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "OnDeathClassApplied.generated.h"

class UDeathClass;
class UWeapon;

UCLASS(Blueprintable, EditInlineNew)
class UOnDeathClassApplied : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDeathClass> DeathClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWeapon> WeaponClass;
    
public:
    UOnDeathClassApplied();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeathClassApplied(TSubclassOf<UDeathClass> InDeathClass, const UWeapon* Weapon) const;
    
};

