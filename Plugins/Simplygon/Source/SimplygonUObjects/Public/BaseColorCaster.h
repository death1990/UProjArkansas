#pragma once
#include "CoreMinimal.h"
#include "MaterialLODEditorInstanceSettings.h"
#include "SimplygonColorCaster.h"
#include "BaseColorCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UBaseColorCaster : public USimplygonColorCaster {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialLODEditorInstanceSettings MaterialInstanceSettings;
    
public:
    UBaseColorCaster();

};

