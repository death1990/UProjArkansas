#pragma once
#include "CoreMinimal.h"
#include "FocusableOptionPresenterWidget.h"
#include "VoiceProfileSelectionWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UVoiceProfileSelectionWidget : public UFocusableOptionPresenterWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlySyncVoiceOnFirstInit;
    
    UVoiceProfileSelectionWidget();

};

