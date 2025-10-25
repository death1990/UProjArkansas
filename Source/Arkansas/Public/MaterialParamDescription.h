#pragma once
#include "CoreMinimal.h"
#include "MaterialParamDescription.generated.h"

USTRUCT(BlueprintType)
struct FMaterialParamDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParam;
    
    ARKANSAS_API FMaterialParamDescription();
};
FORCEINLINE uint32 GetTypeHash(const FMaterialParamDescription) { return 0; }

