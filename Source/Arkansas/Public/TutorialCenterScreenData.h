#pragma once
#include "CoreMinimal.h"
#include "DefaultTutorialDataBase.h"
#include "InputLabelDescription.h"
#include "TutorialCenterScreenData.generated.h"

USTRUCT(BlueprintType)
struct FTutorialCenterScreenData : public FDefaultTutorialDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputLabelDescription InputLabelText;
    
    ARKANSAS_API FTutorialCenterScreenData();
};

