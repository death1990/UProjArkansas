#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayMappedNiagaraEffect.h"
#include "AnimNotify_PlayNiagaraEffectByRegion.generated.h"

class UNiagaraSystem;
class UTravelRegionData;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UAnimNotify_PlayNiagaraEffectByRegion : public UAnimNotify_PlayMappedNiagaraEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTravelRegionData*, UNiagaraSystem*> NiagaraSystemByRegion;
    
public:
    UAnimNotify_PlayNiagaraEffectByRegion();

};

