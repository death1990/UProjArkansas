#pragma once
#include "CoreMinimal.h"
#include "BoneModificationUIWrapper.generated.h"

class UBoneModifications;

USTRUCT(BlueprintType)
struct FBoneModificationUIWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBoneModifications* Modification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiredInverseValue;
    
    ARKANSAS_API FBoneModificationUIWrapper();
};

