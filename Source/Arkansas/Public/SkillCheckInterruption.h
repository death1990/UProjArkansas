#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SkillCheckInterruption.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class USkillCheckInterruption : public UObject {
    GENERATED_BODY()
public:
    USkillCheckInterruption();

private:
    UFUNCTION(BlueprintCallable)
    void MontageFinished(UAnimMontage* Montage, bool bInterrupted);
    
};

