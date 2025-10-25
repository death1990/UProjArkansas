#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIPossessable.h"
#include "AIHazardAvoidanceComponent.generated.h"

class AActor;
class AProjectile;
class UEnvQuery;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UAIHazardAvoidanceComponent : public UActorComponent, public IAIPossessable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* HazardAvoidanceEqsQuery;
    
public:
    UAIHazardAvoidanceComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileStopped(AProjectile* StoppedProjectile);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileDestroyed(AProjectile* DestroyedProjectile);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActiveHazards() const;
    

    // Fix for true pure virtual functions not being implemented
};

