#pragma once
#include "CoreMinimal.h"
#include "ResourceItem.h"
#include "CompanionUpgradeItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UCompanionUpgradeItem : public UResourceItem {
    GENERATED_BODY()
public:
    UCompanionUpgradeItem();

};

