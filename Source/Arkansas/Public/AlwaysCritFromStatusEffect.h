#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "AlwaysCritFromStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UAlwaysCritFromStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysCritFromPlayer;
    
public:
    UAlwaysCritFromStatusEffect();

};

