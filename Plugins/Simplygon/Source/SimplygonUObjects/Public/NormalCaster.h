#pragma once
#include "CoreMinimal.h"
#include "MaterialLODEditorInstanceSettings.h"
#include "SimplygonNormalCaster.h"
#include "NormalCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UNormalCaster : public USimplygonNormalCaster {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialLODEditorInstanceSettings MaterialInstanceSettings;
    
public:
    UNormalCaster();

};

