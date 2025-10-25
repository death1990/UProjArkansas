#pragma once
#include "CoreMinimal.h"
#include "ETempHealthValueType.h"
#include "SkillScalableStatusEffect.h"
#include "AddTemporaryHealthStatusEfffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UAddTemporaryHealthStatusEfffect : public USkillScalableStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePassThroughValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TempHealthValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TempHealthValuePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETempHealthValueType TempHealthType;
    
public:
    UAddTemporaryHealthStatusEfffect();

};

