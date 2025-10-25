#pragma once
#include "CoreMinimal.h"
#include "ModVisual.h"
#include "AudioParamModVisual.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAudioParamModVisual : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RTPCValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterpolationTime;
    
public:
    UAudioParamModVisual();

};

