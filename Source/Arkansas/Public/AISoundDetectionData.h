#pragma once
#include "CoreMinimal.h"
#include "AIDetectionData.h"
#include "AISoundDetectionData.generated.h"

USTRUCT(BlueprintType)
struct FAISoundDetectionData : public FAIDetectionData {
    GENERATED_BODY()
public:
    ARKANSAS_API FAISoundDetectionData();
};

