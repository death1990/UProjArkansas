#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ComponentDebugInterface.h"
#include "ERpgStatGroupMask.h"
#include "RpgStatCollection.h"
#include "StatClampingData.h"
#include "RpgStatComponent.generated.h"

class URpgStat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URpgStatComponent : public UActorComponent, public IComponentDebugInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRpgStatCollection InternalRpgStatCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URpgStat*, FStatClampingData> OverrideClampingData;
    
public:
    URpgStatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void RpgStatShowStat(const FString& Stat) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void RpgStatShowAll() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void RpgStatRemoveModifierDebug(const FName& Stat);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RpgStatAddModifierDebug(const FName& Stat, float Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCollectionStatUpdated(const URpgStat* Stat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue(const URpgStat* Stat, ERpgStatGroupMask StatGroupMask, float InputValue) const;
    

    // Fix for true pure virtual functions not being implemented
};

