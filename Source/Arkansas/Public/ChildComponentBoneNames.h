#pragma once
#include "CoreMinimal.h"
#include "ChildComponentBoneNames.generated.h"

USTRUCT(BlueprintType)
struct FChildComponentBoneNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    ARKANSAS_API FChildComponentBoneNames();
};

