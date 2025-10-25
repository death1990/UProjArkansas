#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClass_BlueprintBase.h"
#include "TetherPointFoundSignatureDelegate.h"
#include "AIBehaviorClass_RunToTether.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class ARKANSAS_API UAIBehaviorClass_RunToTether : public UAIBehaviorClass_BlueprintBase {
    GENERATED_BODY()
public:
    UAIBehaviorClass_RunToTether();

    UFUNCTION(BlueprintCallable)
    void FindTetherPoint(const UEnvQuery* QueryTemplate, FTetherPointFoundSignature OnTetherPointFound);
    
};

