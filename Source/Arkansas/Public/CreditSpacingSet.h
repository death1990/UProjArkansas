#pragma once
#include "CoreMinimal.h"
#include "FCreditsSpacingType.h"
#include "CreditSpacingSet.generated.h"

USTRUCT(BlueprintType)
struct FCreditSpacingSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreditsSpacingType IntroSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreditsSpacingType TitleSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreditsSpacingType OutroSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreditsSpacingType HeaderFooterAdjustment;
    
    ARKANSAS_API FCreditSpacingSet();
};

