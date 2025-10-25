#pragma once
#include "CoreMinimal.h"
#include "ECoverActions.h"
#include "ECoverSide.h"
#include "ECoverTypes.h"
#include "AnimEventGameplayContext.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAnimEventGameplayContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> SourceAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ECoverTypes> CoverTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ECoverSide> CoverSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ECoverActions> CoverActions;
    
    ARKANSAS_API FAnimEventGameplayContext();
};

