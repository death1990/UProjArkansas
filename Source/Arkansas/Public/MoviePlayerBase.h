#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "MovieData.h"
#include "OnMovieEndDelegate.h"
#include "MoviePlayerBase.generated.h"

class UBinkMediaTexture;
class UFileMediaSource;
class UImage;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoviePlayerBase : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieEnd OnMovieEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MovieDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MovieOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLoopVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieData> SequentialPlayMovies;
    
public:
    UMoviePlayerBase();

    UFUNCTION(BlueprintCallable)
    void StopMovie(bool bWasSkipped);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(bool bShouldLoop);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMovie();
    
    UFUNCTION(BlueprintCallable)
    void PlayMovieWithMovieData(const FMovieData& MovieData);
    
    UFUNCTION(BlueprintCallable)
    void PlayMovies(TArray<FMovieData> MoviesToPlay);
    
    UFUNCTION(BlueprintCallable)
    void PlayMovie(UFileMediaSource* Movie);
    
    UFUNCTION(BlueprintCallable)
    void PauseMovie();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMovieSourceOpened(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnMovieFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoviePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoviePaused() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMovie();
    
};

