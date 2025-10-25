#pragma once
#include "CoreMinimal.h"
#include "GenericCollapsableList.h"
#include "AudioLogList.generated.h"

class UAudioLogItem;
class UGenericCollapsableListEntry;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UAudioLogList : public UGenericCollapsableList {
    GENERATED_BODY()
public:
    UAudioLogList();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAudioLogViewedCB(UGenericCollapsableListEntry* ListEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAudioLogSelectedCB(UGenericCollapsableListEntry* ListEntry);
    
    UFUNCTION(BlueprintCallable)
    void AddAudioLog(UAudioLogItem* AudioLogItem, bool bIsNew);
    
};

