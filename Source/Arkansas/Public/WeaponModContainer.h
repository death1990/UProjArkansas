#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EModSlot.h"
#include "WeaponModProjectileOverride.h"
#include "WeaponModSlot.h"
#include "WeaponModVisualOverride.h"
#include "WeaponModContainer.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UWeaponModContainer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EModSlot, FWeaponModSlot> ModSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponModVisualOverride> ModVisualOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponModProjectileOverride> ProjectileOverrides;
    
public:
    UWeaponModContainer();

};

