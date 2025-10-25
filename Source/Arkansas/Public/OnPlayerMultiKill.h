#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "OnPlayerMultiKill.generated.h"

class UWeapon;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerMultiKill : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWeapon> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyCountCharacters;
    
public:
    UOnPlayerMultiKill();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMultiKill(int32 NumKilled, const UWeapon* Weapon, int32 NumCharactersKilled) const;
    
};

