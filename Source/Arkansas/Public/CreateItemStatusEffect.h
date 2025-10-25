#pragma once
#include "CoreMinimal.h"
#include "DefaultItemStack.h"
#include "ECreateItemCountRule.h"
#include "StatusEffect.h"
#include "CreateItemStatusEffect.generated.h"

class UStaticLootList;

UCLASS(Blueprintable, EditInlineNew)
class UCreateItemStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultItemStack> ItemsToCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreateItemCountRule CountRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticLootList* LootTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayItemNotification;
    
public:
    UCreateItemStatusEffect();

};

