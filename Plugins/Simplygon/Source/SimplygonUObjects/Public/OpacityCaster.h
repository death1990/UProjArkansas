#pragma once
#include "CoreMinimal.h"
#include "MaterialLODEditorInstanceSettings.h"
#include "SimplygonOpacityCaster.h"
#include "OpacityCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UOpacityCaster : public USimplygonOpacityCaster {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialLODEditorInstanceSettings MaterialInstanceSettings;
    
public:
    UOpacityCaster();

};

