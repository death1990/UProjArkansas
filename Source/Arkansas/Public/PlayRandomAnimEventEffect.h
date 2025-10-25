#pragma once
#include "CoreMinimal.h"
#include "BasePlayAnimEventEffect.h"
#include "PlayRandomAnimEventEffect.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPlayRandomAnimEventEffect : public UBasePlayAnimEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Anims;
    
public:
    UPlayRandomAnimEventEffect();

};

