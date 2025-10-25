#pragma once
#include "CoreMinimal.h"
#include "ECurveKey.h"
#include "CelestialLightSettings.generated.h"

class UCurveLinearColor;
class UCurveVector;

USTRUCT(BlueprintType)
struct FCelestialLightSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* m_ColorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_IntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECurveKey> m_KeyType;
    
public:
    OEIWEATHERSYSTEMRUNTIME_API FCelestialLightSettings();
};

