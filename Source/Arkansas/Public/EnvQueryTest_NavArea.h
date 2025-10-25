#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_NavArea.generated.h"

class UNavArea;

UCLASS(Blueprintable)
class UEnvQueryTest_NavArea : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UNavArea>> NavAreaClasses;
    
public:
    UEnvQueryTest_NavArea();

};

