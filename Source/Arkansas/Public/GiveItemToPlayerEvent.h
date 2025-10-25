#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=ScriptEvent -FallbackName=ScriptEvent
#include "Templates/SubclassOf.h"
#include "GiveItemToPlayerEvent.generated.h"

class UItem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UGiveItemToPlayerEvent : public UScriptEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
public:
    UGiveItemToPlayerEvent();

};

