#pragma once
#include "CoreMinimal.h"
#include "CharacterSkillsBasePage.h"
#include "ESkill.h"
#include "StatsSkillsPageWidget.generated.h"

class UCharacterInfoComponent;
class UFlavorTextWidget;
class UHorizontalBox;
class UInputLabelGroupWidget;
class UPanelWidget;
class UTextBlockBase;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStatsSkillsPageWidget : public UCharacterSkillsBasePage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SkillsHeaderTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SkillPointsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SkillPointDisplayHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlavorTextWidget* FlavorTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EasilyDistractedPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* EasilyDistractedThresholdText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PointsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadZoomMultiplier;
    
public:
    UStatsSkillsPageWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSkillUpdated(UCharacterInfoComponent* InCharacterInfoComponent, ESkill Skill, int32 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnResetAllAllocations();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLevelUp(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnLedgerToggle();
    
    UFUNCTION(BlueprintCallable)
    void OnInputBack();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAllocation();
    
};

