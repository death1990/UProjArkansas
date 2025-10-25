#pragma once
#include "CoreMinimal.h"
#include "ARCC_BasePageWidget.h"
#include "ARCC_NameSelectionWidget.generated.h"

class UButtonBase;
class UTextEntryWidget;
class UVoiceProfileSelectionWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UARCC_NameSelectionWidget : public UARCC_BasePageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* InvisibleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextEntryWidget* TextEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoiceProfileSelectionWidget* VoiceProfileSelector;
    
public:
    UARCC_NameSelectionWidget();

};

