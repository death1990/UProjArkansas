#pragma once
#include "CoreMinimal.h"
#include "PropertryDataObjectContainer.h"
#include "ClassPropertyDataWithObjects.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FClassPropertyDataWithObjects : public FPropertryDataObjectContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ClassPropertyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasVersion;
    
public:
    FClassPropertyDataWithObjects();
};

