#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "OnCinematicEndDelegate.h"
#include "CinematicPlayerWidget.generated.h"

class UMovieSceneSequencePlayer;
class UOverlay;
class USkipInteractionAnimationWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCinematicPlayerWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicEnd OnCinematicEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* CinematicOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkipInteractionAnimationWidget* SkipAnimationWidget;
    
public:
    UCinematicPlayerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SkipCinematic();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayCinematic(UMovieSceneSequencePlayer* Cinematic);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PauseCinematic(bool bIsPaused);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishCinematic();
    
};

