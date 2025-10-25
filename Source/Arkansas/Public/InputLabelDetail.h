#pragma once
#include "CoreMinimal.h"
#include "InputLabelDetail.generated.h"

class UInputLabelWidget;

USTRUCT(BlueprintType)
struct FInputLabelDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputLabelWidget* InputLabelWidget;
    
    ARKANSAS_API FInputLabelDetail();
};

