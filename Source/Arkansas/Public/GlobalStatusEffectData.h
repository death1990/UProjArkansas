#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EGameDifficulty.h"
#include "EIndianaDamageType.h"
#include "Templates/SubclassOf.h"
#include "GlobalStatusEffectData.generated.h"

class UEventEffects;
class UStatusEffect;

UCLASS(Blueprintable)
class UGlobalStatusEffectData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UStatusEffect>> AutoDocRemoveStatusEffects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameDifficulty, int32> MaxStacksForDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> ExplorationStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EIndianaDamageType, UEventEffects*> DamageTypeEventEffects;
    
public:
    UGlobalStatusEffectData();

};

