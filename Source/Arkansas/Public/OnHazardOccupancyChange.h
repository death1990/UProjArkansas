#pragma once
#include "CoreMinimal.h"
#include "EHazardOccupancyType.h"
#include "EZyraniumType.h"
#include "EventListener.h"
#include "OnHazardOccupancyChange.generated.h"

class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnHazardOccupancyChange : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHazardOccupancyType RequiredNewOccupancyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeZyraniumHazard;
    
public:
    UOnHazardOccupancyChange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHazardOccupancyChange(AIndianaCharacter* Character, bool bInside, EZyraniumType ZyraniumType);
    
};

