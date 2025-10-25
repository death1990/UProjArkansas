#pragma once
#include "CoreMinimal.h"
#include "ModVisual.h"
#include "MorphTargetParamMod.h"
#include "MorphTargetModVisual.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UMorphTargetModVisual : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorphTargetParamMod> ParamMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToChildren;
    
public:
    UMorphTargetModVisual();

};

