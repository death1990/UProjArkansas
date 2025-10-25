#pragma once
#include "CoreMinimal.h"
#include "EBeaconType.h"
#include "Templates/SubclassOf.h"
#include "BeaconProperties.generated.h"

class UBeaconTagWidget;

USTRUCT(BlueprintType)
struct ARKANSAS_API FBeaconProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBeaconType BeaconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBeaconTagWidget> BeaconTagWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreaBeacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaBeaconRadius;
    
    FBeaconProperties();
};

