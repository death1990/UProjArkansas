#pragma once
#include "CoreMinimal.h"
#include "ExtremaOverlap.generated.h"

class AIndianaCharacter;

USTRUCT(BlueprintType)
struct FExtremaOverlap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIndianaCharacter> Overlapper;
    
    ARKANSAS_API FExtremaOverlap();
};

