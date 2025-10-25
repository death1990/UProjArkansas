#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayMappedNiagaraEffect.h"
#include "EIndianaDamageType.h"
#include "AnimNotify_PlayNiagaraEffectByDamageType.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UAnimNotify_PlayNiagaraEffectByDamageType : public UAnimNotify_PlayMappedNiagaraEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIndianaDamageType, UNiagaraSystem*> NiagaraSystemByDamageType;
    
public:
    UAnimNotify_PlayNiagaraEffectByDamageType();

};

