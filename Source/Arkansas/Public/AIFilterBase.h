#pragma once
#include "CoreMinimal.h"
#include "AIFilterBase.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIFilterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeChildren;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* LoadedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* LoadedSkeletonClass;
    
public:
    FAIFilterBase();
};

