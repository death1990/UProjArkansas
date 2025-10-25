#pragma once
#include "CoreMinimal.h"
#include "ECurveKey.h"
#include "MaterialParameterCurveScalar.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FMaterialParameterCurveScalar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ValueCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECurveKey> m_KeyType;
    
    OEIWEATHERSYSTEMRUNTIME_API FMaterialParameterCurveScalar();
};

