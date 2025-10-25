#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_MappedTimedNiagaraEffect.h"
#include "EIndianaDamageType.h"
#include "AnimNotifyState_TimedNiagaraEffectByDamageType.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_TimedNiagaraEffectByDamageType : public UAnimNotifyState_MappedTimedNiagaraEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIndianaDamageType, UNiagaraSystem*> NiagaraSystemByDamageType;
    
public:
    UAnimNotifyState_TimedNiagaraEffectByDamageType();

};

