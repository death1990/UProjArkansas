#pragma once
#include "CoreMinimal.h"
#include "DamageDescription.h"
#include "DamageLevelScaler.h"
#include "DamageTierScaler.h"
#include "Destructible.h"
#include "BeamLauncher.generated.h"

class UImpactDataSet;
class UNiagaraSystem;

UCLASS(Blueprintable)
class ABeamLauncher : public ADestructible {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDescription BeamDamageDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageLevelScaler BeamDamageLevelScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageTierScaler BeamDamageTierScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImpactDataSet* BeamImpactDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraFxShotOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraFxShotEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraFxBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackFxBeamEndParam;
    
public:
    ABeamLauncher(const FObjectInitializer& ObjectInitializer);

};

