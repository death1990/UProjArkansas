#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CauseDamageInfo.h"
#include "DamageDescription.h"
#include "IndianaDamageEvent.h"
#include "DamageBlueprintFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UDamageBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDamageBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsDamageWeakspot(const FIndianaDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageStealth(const FIndianaDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageMelee(const FIndianaDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageKillingBlow(const FIndianaDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageFriendlyFire(const FIndianaDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageFlagsWeakspot(int32 DamageFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageFlagsStealth(int32 DamageFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageFlagsMelee(int32 DamageFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageFlagsKillingBlow(int32 DamageFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageFlagsFriendlyFire(int32 DamageFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageFlagsCritical(int32 DamageFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageFlagsBlocked(int32 DamageFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageCritical(const FIndianaDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDamageBlocked(const FIndianaDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetDamageSource(const FCauseDamageInfo& CDI);
    
    UFUNCTION(BlueprintCallable)
    static FDamageDescription GetDamageDescription(const FCauseDamageInfo& CDI);
    
};

