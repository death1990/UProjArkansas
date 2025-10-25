#pragma once
#include "CoreMinimal.h"
#include "AIDetectionData.h"
#include "AIDamageDetectionData.generated.h"

USTRUCT(BlueprintType)
struct FAIDamageDetectionData : public FAIDetectionData {
    GENERATED_BODY()
public:
    ARKANSAS_API FAIDamageDetectionData();
};

