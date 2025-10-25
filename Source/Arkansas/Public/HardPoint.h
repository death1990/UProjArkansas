#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "HardPoint.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API AHardPoint : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTether;
    
    AHardPoint(const FObjectInitializer& ObjectInitializer);

};

