#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "OnCompanionEquippedItemClass.generated.h"

class UItem;

UCLASS(Blueprintable, EditInlineNew)
class UOnCompanionEquippedItemClass : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionID;
    
public:
    UOnCompanionEquippedItemClass();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompanionEquippedItemClass(UItem* Item) const;
    
};

