#pragma once
#include "CoreMinimal.h"
#include "ComponentEvent.h"
#include "SliderEvent.generated.h"

USTRUCT(BlueprintType)
struct FSliderEvent : public FComponentEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    ARKANSAS_API FSliderEvent();
};

