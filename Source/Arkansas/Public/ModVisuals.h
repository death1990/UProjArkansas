#pragma once
#include "CoreMinimal.h"
#include "ModVisual.h"
#include "ModVisuals.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UModVisuals : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UModVisual*> Visuals;
    
public:
    UModVisuals();

};

