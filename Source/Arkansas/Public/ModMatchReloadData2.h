#pragma once
#include "CoreMinimal.h"
#include "FancyReloadSet.h"
#include "WeaponModMatchData.h"
#include "ModMatchReloadData2.generated.h"

USTRUCT(BlueprintType)
struct FModMatchReloadData2 : public FFancyReloadSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchData ModMatchData;
    
    ARKANSAS_API FModMatchReloadData2();
};

