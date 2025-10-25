#pragma once
#include "CoreMinimal.h"
#include "MoviePlayerBase.h"
#include "EmbeddedMoviePlayerWidget.generated.h"

class UButtonBase;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEmbeddedMoviePlayerWidget : public UMoviePlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* MovieSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* PausePlayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* RestartButton;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OverrideWidth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OverrideHeight;
    
public:
    UEmbeddedMoviePlayerWidget();

    UFUNCTION(BlueprintCallable)
    void RestartMovie();
    
};

