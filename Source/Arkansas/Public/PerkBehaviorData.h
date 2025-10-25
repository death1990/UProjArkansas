#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LogicalGroupedExpression.h"
#include "Templates/SubclassOf.h"
#include "PerkBehaviorData.generated.h"

class ACharacter;
class UPerk;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UPerkBehaviorData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPerk> Perk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCooldownBetweenActivations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeInCombatBeforePerkCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalGroupedExpression PerkConditions;
    
public:
    UPerkBehaviorData();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReceiveEvaluatePerk(ACharacter* PerkUser);
    
public:
    UFUNCTION(BlueprintCallable)
    bool EvaluatePerk(ACharacter* PerkUser);
    
};

