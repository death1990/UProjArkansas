#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClass.h"
#include "AIBehaviorClass_RaptidonTankRoar.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ARKANSAS_API UAIBehaviorClass_RaptidonTankRoar : public UAIBehaviorClass {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RoarMontage;
    
public:
    UAIBehaviorClass_RaptidonTankRoar();

private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEndDelegate(UAnimMontage* Montage, bool bInterrupted);
    
};

