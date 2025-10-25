#pragma once
#include "CoreMinimal.h"
#include "CombinedSettingGroup.h"
#include "ECategory.h"
#include "CombinedSettingCategory.generated.h"

USTRUCT(BlueprintType)
struct FCombinedSettingCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECategory SettingCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombinedSettingGroup> SubcategoryGroups;
    
    ARKANSAS_API FCombinedSettingCategory();
};

