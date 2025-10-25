#pragma once
#include "CoreMinimal.h"
#include "BoneNameData.h"
#include "MaterialInterfaceData.h"
#include "BoneDataSet.generated.h"

USTRUCT(BlueprintType)
struct FBoneDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneNameData ShowBoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneNameData HideBoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMaterialInterfaceData> MaterialSwaps;
    
    ARKANSAS_API FBoneDataSet();
};

