#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderActor -FallbackName=TextRenderActor
#include "SampleOEITickManagedActor.generated.h"

UCLASS(Blueprintable)
class OEITICKMANAGER_API ASampleOEITickManagedActor : public ATextRenderActor {
    GENERATED_BODY()
public:
    ASampleOEITickManagedActor(const FObjectInitializer& ObjectInitializer);

};

