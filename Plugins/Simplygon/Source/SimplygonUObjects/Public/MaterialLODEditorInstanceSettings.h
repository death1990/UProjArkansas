#pragma once
#include "CoreMinimal.h"
#include "MaterialLODEditorInstanceSettings.generated.h"

USTRUCT(BlueprintType)
struct SIMPLYGONUOBJECTS_API FMaterialLODEditorInstanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SamplerName;
    
    FMaterialLODEditorInstanceSettings();
};

