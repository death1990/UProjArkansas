#pragma once
#include "CoreMinimal.h"
#include "OEICineShotParametersSectionParams.h"
#include "OEICineShotSection.h"
#include "OEICineShotParametersSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOEICineShotParametersSection : public UOEICineShotSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICineShotParametersSectionParams Params;
    
    UOEICineShotParametersSection();

};

