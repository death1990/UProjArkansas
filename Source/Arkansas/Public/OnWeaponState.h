#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "EWeaponStateEventType.h"
#include "EventListener.h"
#include "OnWeaponState.generated.h"

class UEquipmentComponent;
class UWeapon;

UCLASS(Blueprintable, EditInlineNew)
class UOnWeaponState : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponStateEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESkill> Skills;
    
public:
    UOnWeaponState();

protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponState(UEquipmentComponent* InEquipmentComponent, UWeapon* Weapon);
    
};

