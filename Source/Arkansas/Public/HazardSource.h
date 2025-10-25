#pragma once
#include "CoreMinimal.h"
#include "Destructible.h"
#include "HazardSource.generated.h"

class AHazard;

UCLASS(Blueprintable)
class AHazardSource : public ADestructible {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHazard* ParentHazard;
    
public:
    AHazardSource(const FObjectInitializer& ObjectInitializer);

};

