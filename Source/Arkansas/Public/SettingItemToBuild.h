#pragma once
#include "CoreMinimal.h"
#include "DependentSettingsToBuild.h"
#include "SettingToBuild.h"
#include "SettingItemToBuild.generated.h"

USTRUCT(BlueprintType)
struct FSettingItemToBuild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingToBuild SettingToBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDependentSettingsToBuild> DependentSettings;
    
    ARKANSAS_API FSettingItemToBuild();
};

