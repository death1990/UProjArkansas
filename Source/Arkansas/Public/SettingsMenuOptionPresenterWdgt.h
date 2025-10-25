#pragma once
#include "CoreMinimal.h"
#include "SettingsMenuSlotEntryBase.h"
#include "SettingsMenuOptionPresenterWdgt.generated.h"

class UOptionPresenterWidget;
class UOverlay;
class USettingsMenuWidget;
class UUserSetting;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USettingsMenuOptionPresenterWdgt : public USettingsMenuSlotEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ButtonContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionPresenterWidget* OptionPresenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUserSetting* UserSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USettingsMenuWidget* SettingsMenu;
    
public:
    USettingsMenuOptionPresenterWdgt();

    UFUNCTION(BlueprintCallable)
    void OnValueChanged(int32 SelectedItem);
    
};

