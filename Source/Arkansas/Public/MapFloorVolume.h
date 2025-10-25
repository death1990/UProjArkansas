#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "MapFloorVolume.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API AMapFloorVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FloorName;
    
public:
    AMapFloorVolume(const FObjectInitializer& ObjectInitializer);

};

