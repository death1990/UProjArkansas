#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EAmmoReloadType.h"
#include "OnCurrentPoolSizeChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "AmmoPoolBase.generated.h"

class UAmmo;
class UConsumableItem;
class URpgStat;
class URpgStatComponent;
class USpell;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UAmmoPoolBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentPoolSizeChanged OnCurrentPoolSizeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstantReloadCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmmoReloadType AmmoReloadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> BreakActionReloadTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPartialReloadWhileADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEmptyReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEmptyReloadWhileADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmmoReloadType AmmoEmptyReloadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmptyReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> InfiniteAmmoSpell;
    
public:
    UAmmoPoolBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesConsumables() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreAmmoCount(bool bNewIgnoreAmmoCount);
    
    UFUNCTION(BlueprintCallable)
    bool RefillAmmo(int32 Amount, bool bForcePlayerEquipped);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTacticalTimeDilationStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnTacticalTimeDilationEnd(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoolSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissingAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxReloadTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPoolSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UConsumableItem> GetCurrentConsumableClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UAmmo> GetCurrentAmmoClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAmmo* GetCurrentAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseReloadTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdjustedReloadTime() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeAmmo(int32 Amount);
    
};

