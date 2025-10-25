#pragma once
#include "CoreMinimal.h"
#include "MaterialModEntry.h"
#include "ModVisual.h"
#include "MaterialModVisual.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UMaterialModVisual : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialModEntry> ParamMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToChildren;
    
public:
    UMaterialModVisual();

};

