#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeathMontageGroup.h"
#include "DeathMontageSet.generated.h"

class UDeathClass;

UCLASS(Blueprintable)
class UDeathMontageSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UDeathClass>, FDeathMontageGroup> DeathMontages;
    
public:
    UDeathMontageSet();

};

