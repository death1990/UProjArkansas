#pragma once
#include "CoreMinimal.h"
#include "WeaponModMatchData.h"
#include "ModMatchAnimData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FModMatchAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchData ModMatchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequence;
    
    ARKANSAS_API FModMatchAnimData();
};

