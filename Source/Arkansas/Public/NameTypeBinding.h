#pragma once
#include "CoreMinimal.h"
#include "EInputBindingType.h"
#include "NameTypeBinding.generated.h"

USTRUCT(BlueprintType)
struct FNameTypeBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputBindingType BindingType;
    
    ARKANSAS_API FNameTypeBinding();
};

