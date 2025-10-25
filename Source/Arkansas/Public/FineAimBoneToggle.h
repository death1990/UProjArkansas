#pragma once
#include "CoreMinimal.h"
#include "WeaponModBoneData.h"
#include "FineAimBoneToggle.generated.h"

USTRUCT(BlueprintType)
struct FFineAimBoneToggle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponModBoneData> FineAimBoneData;
    
    ARKANSAS_API FFineAimBoneToggle();
};

