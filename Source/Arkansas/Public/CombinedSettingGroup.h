#pragma once
#include "CoreMinimal.h"
#include "ESettingSubcategory.h"
#include "SettingItemToBuild.h"
#include "SubcategoryDescription.h"
#include "CombinedSettingGroup.generated.h"

USTRUCT(BlueprintType)
struct FCombinedSettingGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSubcategoryEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingSubcategory SubcategoryEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubcategoryDescription OverrideSubcategoryDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSettingItemToBuild> SettingItemsInGroup;
    
    ARKANSAS_API FCombinedSettingGroup();
};

