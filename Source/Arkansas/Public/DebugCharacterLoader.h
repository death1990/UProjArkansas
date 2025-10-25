#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "DebugCharacterLoader.generated.h"

class UButtonBase;
class UCanvasPanel;
class UDebugCharacterLibrary;
class UDebugCharacterLoadout;
class UDebugCharacterStateAsset;
class UHorizontalBox;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDebugCharacterLoader : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPauseGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugCharacterLibrary* LoadoutLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUsersPerColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MainCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* CategoryHBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* NonZeroSkillsLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* ExistingPerksLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* ExistingInventoryLabel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugCharacterLoadout* LoadoutBeingApplied;
    
public:
    UDebugCharacterLoader();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUserNamesButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnUserNameButtonClicked(const FString& UserName);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleNonZeroSkills();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleExistingPerks();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleExistingInventory();
    
    UFUNCTION(BlueprintCallable)
    void OnStateButtonClicked(TSoftObjectPtr<UDebugCharacterStateAsset> StateAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnMyLoadoutsButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadoutButtonClicked(TSoftClassPtr<UDebugCharacterLoadout> Loadout);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDefaultSettingClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCategoryButtonClicked(UButtonBase* Button);
    
};

