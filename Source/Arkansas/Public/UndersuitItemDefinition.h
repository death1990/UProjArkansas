#pragma once
#include "CoreMinimal.h"
#include "ArmorItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "UndersuitItemDefinition.generated.h"

class UUndersuit;

USTRUCT(BlueprintType)
struct FUndersuitItemDefinition : public FArmorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUndersuit> UndersuitClass;
    
    ARKANSAS_API FUndersuitItemDefinition();
};

