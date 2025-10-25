#pragma once
#include "CoreMinimal.h"
#include "ChildComponentBoneNames.h"
#include "BoneNameData.generated.h"

USTRUCT(BlueprintType)
struct FBoneNameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FChildComponentBoneNames> ChildBoneNames;
    
    ARKANSAS_API FBoneNameData();
};

