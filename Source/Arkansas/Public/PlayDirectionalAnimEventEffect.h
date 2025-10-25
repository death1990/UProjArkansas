#pragma once
#include "CoreMinimal.h"
#include "BasePlayAnimEventEffect.h"
#include "PlayDirectionalAnimEventEffect.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPlayDirectionalAnimEventEffect : public UBasePlayAnimEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableExtraDirectionAnimsForRandomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Anims;
    
public:
    UPlayDirectionalAnimEventEffect();

};

