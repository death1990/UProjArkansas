#pragma once
#include "CoreMinimal.h"
#include "DeathMontageGroup.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDeathMontageGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListIsRadialAnimation;
    
public:
    ARKANSAS_API FDeathMontageGroup();
};

