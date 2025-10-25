#pragma once
#include "CoreMinimal.h"
#include "InputMaterialSettings.generated.h"

USTRUCT(BlueprintType)
struct FInputMaterialSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialMapping;
    
    SIMPLYGONUOBJECTS_API FInputMaterialSettings();
};

