#pragma once
#include "CoreMinimal.h"
#include "EMeleeAction.h"
#include "EMeleeAttackType.h"
#include "FactionListener.h"
#include "OnMeleeHit.generated.h"

class AActor;
class UWeapon;

UCLASS(Blueprintable, EditInlineNew)
class UOnMeleeHit : public UFactionListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeleeAttackType MeleeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeleeAction MeleeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCarryOverNumOfHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPassThroughDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassThroughDamageScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePlayerCharacter;
    
public:
    UOnMeleeHit();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMeleeHit(AActor* Attacker, const TArray<AActor*>& HitActors, UWeapon* Weapon, float Damage) const;
    
};

