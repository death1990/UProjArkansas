#pragma once
#include "CoreMinimal.h"
#include "EnvQueryTest_Cover.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_ValidCover.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_ValidCover : public UEnvQueryTest_Cover {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> EnemyLocationOverrideContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> EnemyAimLocationsOverrideContext;
    
public:
    UEnvQueryTest_ValidCover();

};

