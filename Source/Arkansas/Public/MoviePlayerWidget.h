#pragma once
#include "CoreMinimal.h"
#include "MoviePlayerBase.h"
#include "MoviePlayerWidget.generated.h"

class UButtonBase;
class UImage;
class USkipInteractionAnimationWidget;
class USubtitleManagerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoviePlayerWidget : public UMoviePlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubtitleManagerWidget* SubtitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* InvisibleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkipInteractionAnimationWidget* SkipAnimationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LeftAnchorImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RightAnchorImage;
    
public:
    UMoviePlayerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMovieSkipped();
    
    UFUNCTION(BlueprintCallable)
    void OnMoviePaused(bool bIsPaused);
    
};

