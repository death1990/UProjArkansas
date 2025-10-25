#pragma once
#include "CoreMinimal.h"
#include "ECurveKey.h"
#include "MaterialParameterCurveColor.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FMaterialParameterCurveColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* m_ValueCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECurveKey> m_KeyType;
    
    OEIWEATHERSYSTEMRUNTIME_API FMaterialParameterCurveColor();
};

