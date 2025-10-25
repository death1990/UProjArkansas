#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "AIFilterBase.h"
#include "AIFilterController.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIFilterController : public FAIFilterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath ControllerClass;
    
    FAIFilterController();
};

