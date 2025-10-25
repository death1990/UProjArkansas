#pragma once
#include "CoreMinimal.h"
#include "ScannerAbility.generated.h"

USTRUCT(BlueprintType)
struct FScannerAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AbilityName;
    
    ARKANSAS_API FScannerAbility();
};

