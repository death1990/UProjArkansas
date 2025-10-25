#pragma once
#include "CoreMinimal.h"
#include "BasePlayAnimEventEffect.h"
#include "ECoverActions.h"
#include "ECoverSide.h"
#include "ECoverTypes.h"
#include "PlayCoverAnimEventEffect.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPlayCoverAnimEventEffect : public UBasePlayAnimEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECoverActions> CoverActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECoverSide> OptionalCoverSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECoverTypes> OptionalCoverTypes;
    
public:
    UPlayCoverAnimEventEffect();

};

