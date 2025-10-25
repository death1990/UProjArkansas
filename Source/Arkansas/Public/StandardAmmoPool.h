#pragma once
#include "CoreMinimal.h"
#include "AmmoPoolBase.h"
#include "Templates/SubclassOf.h"
#include "StandardAmmoPool.generated.h"

class UAmmo;

UCLASS(Blueprintable, EditInlineNew)
class UStandardAmmoPool : public UAmmoPoolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmmo> DefaultAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAmmo* CurrentAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmmo> PendingAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmmo> LoadingAmmoClass;
    
public:
    UStandardAmmoPool();

};

