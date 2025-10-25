#pragma once
#include "CoreMinimal.h"
#include "NameTypeBinding.h"
#include "LinkedBinding.generated.h"

USTRUCT(BlueprintType)
struct FLinkedBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkedBindingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNameTypeBinding> Bindings;
    
    ARKANSAS_API FLinkedBinding();
};

