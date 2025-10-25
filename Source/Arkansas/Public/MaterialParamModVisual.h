#pragma once
#include "CoreMinimal.h"
#include "MaterialParamMod.h"
#include "ModVisual.h"
#include "MaterialParamModVisual.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UMaterialParamModVisual : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParamMod> ParamMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParamMod> SubsurfaceParamMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToChildren;
    
public:
    UMaterialParamModVisual();

};

