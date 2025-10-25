#pragma once
#include "CoreMinimal.h"
#include "VariableCollection.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FVariableCollection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> ObjectVariables;
    
public:
    ARKANSAS_API FVariableCollection();
};

