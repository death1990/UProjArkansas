#pragma once
#include "CoreMinimal.h"
#include "BasePlayAnimEventEffect.h"
#include "FineAimAnimEventEffect.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UFineAimAnimEventEffect : public UBasePlayAnimEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FineAimIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FineAimOut;
    
public:
    UFineAimAnimEventEffect();

};

