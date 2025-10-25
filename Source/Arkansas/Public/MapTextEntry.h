#pragma once
#include "CoreMinimal.h"
#include "BasicMapFloorTrackedActor.h"
#include "MapTextEntryData.h"
#include "MapTextEntry.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API AMapTextEntry : public ABasicMapFloorTrackedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapTextEntryData TextEntryData;
    
    AMapTextEntry(const FObjectInitializer& ObjectInitializer);

};

