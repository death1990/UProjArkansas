#pragma once
#include "CoreMinimal.h"
#include "TimeOfDayActor.h"
#include "FakeGIActor.generated.h"

UCLASS(Blueprintable)
class OEIWEATHERSYSTEMRUNTIME_API AFakeGIActor : public ATimeOfDayActor {
    GENERATED_BODY()
public:
    AFakeGIActor(const FObjectInitializer& ObjectInitializer);

};

