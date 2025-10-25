#pragma once
#include "CoreMinimal.h"
#include "ChildMeshTags.generated.h"

USTRUCT(BlueprintType)
struct FChildMeshTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    ARKANSAS_API FChildMeshTags();
};

