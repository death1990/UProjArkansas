#pragma once
#include "CoreMinimal.h"
#include "MaterialInterfaceData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialInterfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    ARKANSAS_API FMaterialInterfaceData();
};

