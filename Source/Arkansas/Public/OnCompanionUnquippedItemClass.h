#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "OnCompanionUnquippedItemClass.generated.h"

class UItem;

UCLASS(Blueprintable, EditInlineNew)
class UOnCompanionUnquippedItemClass : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionID;
    
public:
    UOnCompanionUnquippedItemClass();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompanionUnquippedItemClass(UItem* Item) const;
    
};

