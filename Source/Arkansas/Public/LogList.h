#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "GenericCollapsableList.h"
#include "LogList.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULogList : public UGenericCollapsableList {
    GENERATED_BODY()
public:
    ULogList();

protected:
    UFUNCTION(BlueprintCallable)
    void AddNewFoundLog(FLocString ExaminableName, FLocString ExaminableDescription);
    
};

