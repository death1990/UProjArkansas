#pragma once
#include "CoreMinimal.h"
#include "OEICineIdleSectionTemplateBase.h"
#include "OEICineIdleSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FOEICineIdleSectionTemplate : public FOEICineIdleSectionTemplateBase {
    GENERATED_BODY()
public:
    OEICINEMATICS_API FOEICineIdleSectionTemplate();
};

