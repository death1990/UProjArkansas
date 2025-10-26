#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include <GameplayTagContainer.h>
#include "CrowdTickFunction.h"
#include "SharedAnimProxyData.h"
#include "Templates/SubclassOf.h"
#include "OEICrowdManager.generated.h"

class AAIController;
class AOEICrowdVolume;
class AOEIPassiveAnimProxy;
class UAnimInstance;
class UAnimationProxyData;
class UCrowdManager;
class UOEICrowdSettings;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable, Transient)
class OEICROWDMANAGERRUNTIME_API AOEICrowdManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAnimationProxyData*> StationaryCowerData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UAnimInstance>> MoverAnimInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UAnimInstance>> AnimProxyAnimInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UAnimInstance>> MergedAnimProxyAnimInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentConstructingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOEICrowdSettings* CrowdSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrowdTickFunction PrimaryTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AllCharacterObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOEICrowdVolume*> CurrentVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSharedAnimProxyData> SharedAnimProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> AvailableSkelMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOEIPassiveAnimProxy*> NonRenderedAnimProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCrowdManager* RecastCrowdManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, AAIController*> ActiveAgents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIController*> AvailableAIControllers;
    
public:
    AOEICrowdManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetCrowdsCombatState(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCrowdsCombatState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetActiveCrowdVolumes(TArray<AOEICrowdVolume*>& OutCrowdVolumes);
    
};

