#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "ELoadGameResult.h"
#include "ESaveGameStorageStatus.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "MainOptionsWidget.generated.h"

class UButtonBase;
class UDifficultySelectWidget;
class UIndianaInterfaceUserWidget;
class UInputLabelWidget;
class UPanelWidget;
class USettingsMenuWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMainOptionsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* StartGameButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* MainOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* ContinueButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* NewGameButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* DebugButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelWidget* MenuHotkeyLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* DeliverablesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* ExtrasButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* CreditsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* QuitButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* SettingsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* LoadSaveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* ChangeProfileButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USettingsMenuWidget> SettingsMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDifficultySelectWidget> DifficultySelectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CharacterCustomizationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ParadiseIslandLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIndianaInterfaceUserWidget* ExternalInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USettingsMenuWidget* SettingsMenuInterface;
    
public:
    UMainOptionsWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnableToLoadMessageClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnStorageStatusChanged(ESaveGameStorageStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnSettingsMenuClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnQueryLatestSaveFinished(const FString& LatestSaveName);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadSaveMenuClosed(bool bForced);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadComplete(const FString& Filename, ELoadGameResult Result);
    
};

