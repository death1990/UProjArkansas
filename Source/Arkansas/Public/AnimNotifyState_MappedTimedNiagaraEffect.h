#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraAnimNotifies -ObjectName=AnimNotifyState_TimedNiagaraEffect -FallbackName=AnimNotifyState_TimedNiagaraEffect
#include "AnimNotifyState_MappedTimedNiagaraEffect.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_MappedTimedNiagaraEffect : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
    UAnimNotifyState_MappedTimedNiagaraEffect();

};

