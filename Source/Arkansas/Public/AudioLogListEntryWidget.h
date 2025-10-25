#pragma once
#include "CoreMinimal.h"
#include "EAudioLogPlayState.h"
#include "GenericCollapsableListEntry.h"
#include "AudioLogListEntryWidget.generated.h"

class UAudioLogItem;
class UPanelWidget;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UAudioLogListEntryWidget : public UGenericCollapsableListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PlayTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StopTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* LogHighlight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioLogItem> CachedAudioLog;
    
public:
    UAudioLogListEntryWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAudioLogPlayStateChanged(EAudioLogPlayState NewPlayState);
    
};

