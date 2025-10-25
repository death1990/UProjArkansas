#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderBoolValue -FallbackName=AIDataProviderBoolValue
#include "EnvQueryTest_Cover.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_ValidCoverFire.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_ValidCoverFire : public UEnvQueryTest_Cover {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue ShouldRunTest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> EnemyLocationOverrideContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> EnemyAimLocationsOverrideContext;
    
public:
    UEnvQueryTest_ValidCoverFire();

};

