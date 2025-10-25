#pragma once
#include "CoreMinimal.h"
#include "NavigationBumpSettings.generated.h"

USTRUCT(BlueprintType)
struct FNavigationBumpSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBumpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostOverlapBumpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BumperBlockedTime;
    
    ARKANSAS_API FNavigationBumpSettings();
};

