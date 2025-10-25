#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "DynamicOverrides.generated.h"

USTRUCT(BlueprintType)
struct FDynamicOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString AutoSprintName;
    
    ARKANSAS_API FDynamicOverrides();
};

