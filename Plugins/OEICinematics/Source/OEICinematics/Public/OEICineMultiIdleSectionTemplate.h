#pragma once
#include "CoreMinimal.h"
#include "OEICineIdleSectionTemplateBase.h"
#include "OEICineMultiIdleSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FOEICineMultiIdleSectionTemplate : public FOEICineIdleSectionTemplateBase {
    GENERATED_BODY()
public:
    OEICINEMATICS_API FOEICineMultiIdleSectionTemplate();
};

