#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "IndianaInterfaceUserWidget.h"
#include "OnNewAptitudeSelectedDelegate.h"
#include "OnNewSkillCategorySelectedDelegate.h"
#include "OnPageChangeDelegate.h"
#include "CharacterCreationMasterWidget.generated.h"

class UButtonGroup;
class UCCAppearancePageWidget;
class UCCAptitudePageWidget;
class UCCCharacterSummaryPageWidget;
class UCCNameSelectionWidget;
class UCCSkillsPageWidget;
class UCanvasPanel;
class UDataTable;
class UFileMediaSource;
class UNavigationGroupWidget;
class UOverlay;
class UScrollBox;
class UScrollingWidgetGroup;
class UTextBlockBase;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCharacterCreationMasterWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPageChange OnPageChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewSkillCategorySelected OnNewSkillCategorySelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewAptitudeSelected OnNewAptitudeSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* PageScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UButtonGroup* PageButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScrollingWidgetGroup* ScrollingWidgetGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCSkillsPageWidget* SkillPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCAptitudePageWidget* AptitudePage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCCharacterSummaryPageWidget* SummaryPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCAppearancePageWidget* AppearancePage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCCNameSelectionWidget* NamePage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ContentContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavigationGroupWidget* NavigationBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* FramingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* PlayerNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BackgroundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BannedNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath NewGameLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MainMenuLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* IntroMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* OutroMoviePartOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* OutroMoviePartTwo;
    
public:
    UCharacterCreationMasterWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayPartTwoOutroMovie(bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable)
    void OnPageBack();
    
    UFUNCTION(BlueprintCallable)
    void OnOutroMovieTwoComplete(bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutroMovieStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutroMoviePartTwoComplete(bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutroMoviePartOneComplete(bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable)
    void OnIntroMovieCompleteImpl(bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIntroMovieComplete(bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable)
    void OnIntroAnimSequenceComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeOutContents();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeInContents();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterCreationUIStart();
    
};

