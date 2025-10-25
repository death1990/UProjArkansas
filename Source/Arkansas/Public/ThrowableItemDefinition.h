#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "ThrowableItemDefinition.generated.h"

class UThrowable;

USTRUCT(BlueprintType)
struct FThrowableItemDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UThrowable> ThrowableClass;
    
    ARKANSAS_API FThrowableItemDefinition();
};

