#pragma once
#include "CoreMinimal.h"
#include "EItemDegradationState.h"
#include "Item.h"
#include "DegradableItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDegradableItem : public UItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemDegradationState DegradationState;
    
public:
    UDegradableItem();

};

