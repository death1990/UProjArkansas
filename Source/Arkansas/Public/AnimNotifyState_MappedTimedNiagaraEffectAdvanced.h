#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraAnimNotifies -ObjectName=AnimNotifyState_TimedNiagaraEffectAdvanced -FallbackName=AnimNotifyState_TimedNiagaraEffectAdvanced
#include "AnimNotifyState_MappedTimedNiagaraEffectAdvanced.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_MappedTimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffectAdvanced {
    GENERATED_BODY()
public:
    UAnimNotifyState_MappedTimedNiagaraEffectAdvanced();

};

