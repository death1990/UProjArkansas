#pragma once
#include "CoreMinimal.h"
#include "ECompanionActionTypeChatterParam.h"
#include "StatusEffect.h"
#include "PlayChatterStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UPlayChatterStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionActionTypeChatterParam CompanionActionChatterParam;
    
public:
    UPlayChatterStatusEffect();

};

