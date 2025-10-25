#pragma once
#include "CoreMinimal.h"
#include "ModVisual.h"
#include "EnableEmitterModVisual.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UEnableEmitterModVisual : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EmitterNames;
    
public:
    UEnableEmitterModVisual();

};

