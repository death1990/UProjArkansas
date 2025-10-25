#pragma once
#include "CoreMinimal.h"
#include "ELanguageMode.generated.h"

UENUM(BlueprintType)
enum class ELanguageMode : uint8 {
    English,
    French,
    Italian,
    German,
    SpanishCastilian,
    SpanishLatinAmerican,
    PortugueseBrazilian,
    Russian,
    Korean,
    Japanese,
    ChineseSimplified,
    Polish,
    Count,
    Invalid,
};

