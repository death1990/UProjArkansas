#pragma once
#include "CoreMinimal.h"
#include "ResourceItem.h"
#include "Templates/SubclassOf.h"
#include "NourishmentItem.generated.h"

class USpell;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UNourishmentItem : public UResourceItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConsumableInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USpell>> ConsumptionSpells;
    
public:
    UNourishmentItem();

};

