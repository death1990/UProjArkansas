#pragma once
#include "CoreMinimal.h"
#include "EventEffect.h"
#include "AkSetStateEventEffect.generated.h"

class UAkStateValue;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UAkSetStateEventEffect : public UEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* TriggerStateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* StopStateValue;
    
public:
    UAkSetStateEventEffect();

};

