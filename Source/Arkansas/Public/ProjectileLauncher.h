#pragma once
#include "CoreMinimal.h"
#include "DamageLevelScaler.h"
#include "DamageTierScaler.h"
#include "Destructible.h"
#include "Templates/SubclassOf.h"
#include "ProjectileLauncher.generated.h"

class AProjectile;
class UArrowComponent;

UCLASS(Blueprintable)
class AProjectileLauncher : public ADestructible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageLevelScaler ProjectileDamageLevelScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageTierScaler ProjectileDamageTierScaler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaunchSocketName;
    
public:
    AProjectileLauncher(const FObjectInitializer& ObjectInitializer);

};

