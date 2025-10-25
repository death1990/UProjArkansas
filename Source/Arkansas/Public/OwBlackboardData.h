#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardData -FallbackName=BlackboardData
#include "BlackboardEntryConfig.h"
#include "OwBlackboardData.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class UOwBlackboardData : public UBlackboardData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlackboardEntryConfig> DefaultKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 PackageDirtyState;
    
public:
    UOwBlackboardData();

};

