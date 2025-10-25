#pragma once
#include "CoreMinimal.h"
#include "ESpawnActorEventLocationSetting.h"
#include "ESpawnActorEventRotationSetting.h"
#include "EventEffect.h"
#include "Templates/SubclassOf.h"
#include "SpawnActorEventEffect.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USpawnActorEventEffect : public UEventEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorEventLocationSetting LocationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorEventRotationSetting RotationSetting;
    
public:
    USpawnActorEventEffect();

};

