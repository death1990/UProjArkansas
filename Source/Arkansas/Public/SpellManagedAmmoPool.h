#pragma once
#include "CoreMinimal.h"
#include "AmmoPoolBase.h"
#include "Templates/SubclassOf.h"
#include "SpellManagedAmmoPool.generated.h"

class UAmmo;

UCLASS(Blueprintable, EditInlineNew)
class USpellManagedAmmoPool : public UAmmoPoolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmmo> DefaultAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAmmo* CurrentAmmo;
    
public:
    USpellManagedAmmoPool();

    UFUNCTION(BlueprintCallable)
    void SetIsReloading(bool bNewIsReloading);
    
};

