#pragma once
#include "CoreMinimal.h"
#include "OEICineShotSection.h"
#include "OEICineShotTargetSectionParams.h"
#include "OEICineShotTargetSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOEICineShotTargetSection : public UOEICineShotSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICineShotTargetSectionParams Params;
    
    UOEICineShotTargetSection();

};

