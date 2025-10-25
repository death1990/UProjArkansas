#pragma once
#include "CoreMinimal.h"
#include "EFormattedTextNodeType.generated.h"

UENUM(BlueprintType)
enum class EFormattedTextNodeType : uint8 {
    LocString,
    Float,
    Integer,
    String,
    Parent,
    FormattedLocString,
    FormattedFloat,
    FormattedInteger,
    FormattedString,
    FormattedStringBase,
    FormattedLocStringBase,
    FormattedNodeBase,
    FormattedPercent,
    Count,
    Invalid,
};

