#pragma once
#include "CoreMinimal.h"
#include "MaterialLODEditorInstanceSettings.h"
#include "SimplygonOpacityCaster.h"
#include "OpacityMaskCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UOpacityMaskCaster : public USimplygonOpacityCaster {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialLODEditorInstanceSettings MaterialInstanceSettings;
    
public:
    UOpacityMaskCaster();

};

