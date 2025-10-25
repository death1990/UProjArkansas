#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "RadioStationVolume.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API ARadioStationVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBuffer;
    
public:
    ARadioStationVolume(const FObjectInitializer& ObjectInitializer);

};

