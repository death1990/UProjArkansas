#pragma once
#include "CoreMinimal.h"
#include "OEIWeightedGestureCollection.h"
#include "OEIGestureWordBindingGroup.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEIGestureWordBindingGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEIWeightedGestureCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MatchingPhrase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireEmphasisAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowNonWordOptions;
    
    FOEIGestureWordBindingGroup();
};

