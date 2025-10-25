#pragma once
#include "CoreMinimal.h"
#include "TargetEffect.h"
#include "SpellEffectByEvent.generated.h"

class UEventListener;

USTRUCT(BlueprintType)
struct FSpellEffectByEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventListener* ApplyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventListener* RemoveEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTargetEffect> TargetEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveSingleStack;
    
    ARKANSAS_API FSpellEffectByEvent();
};

