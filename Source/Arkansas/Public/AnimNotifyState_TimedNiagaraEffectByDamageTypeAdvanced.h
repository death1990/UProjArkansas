#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_MappedTimedNiagaraEffectAdvanced.h"
#include "EIndianaDamageType.h"
#include "AnimNotifyState_TimedNiagaraEffectByDamageTypeAdvanced.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_TimedNiagaraEffectByDamageTypeAdvanced : public UAnimNotifyState_MappedTimedNiagaraEffectAdvanced {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIndianaDamageType, UNiagaraSystem*> NiagaraSystemByDamageType;
    
public:
    UAnimNotifyState_TimedNiagaraEffectByDamageTypeAdvanced();

};

