#pragma once
#include "CoreMinimal.h"
#include "PropertryDataObjectContainer.h"
#include "FunctionParameterWithObjects.generated.h"

USTRUCT(BlueprintType)
struct FFunctionParameterWithObjects : public FPropertryDataObjectContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDefaultValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasVersion;
    
public:
    ARKANSAS_API FFunctionParameterWithObjects();
};

