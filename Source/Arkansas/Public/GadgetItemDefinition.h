#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "GadgetItemDefinition.generated.h"

class UGadget;

USTRUCT(BlueprintType)
struct FGadgetItemDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGadget> GadgetClass;
    
    ARKANSAS_API FGadgetItemDefinition();
};

