#pragma once
#include "CoreMinimal.h"
#include "EBonusItemSource.generated.h"

UENUM(BlueprintType)
enum class EBonusItemSource : uint8 {
    ScrapperPerk,
    SurvivalistPerk,
    TreasureHunterPerk,
    ScrapEngineeringPerk,
    AutomechScrapperPerk,
    WastefulFlaw,
};

