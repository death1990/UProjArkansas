#pragma once
#include "CoreMinimal.h"
#include "ESpawnActorEventLocationSetting.h"
#include "ESpawnActorEventRotationSetting.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "SpawnActorStatusEffect.generated.h"

class AActor;
class UWeaponActorSpawnData;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API USpawnActorStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorEventLocationSetting LocationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorEventRotationSetting RotationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponActorSpawnData* SpawnData;
    
public:
    USpawnActorStatusEffect();

};

