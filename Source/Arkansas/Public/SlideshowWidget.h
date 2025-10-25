#pragma once
#include "CoreMinimal.h"
#include "ConversationBaseWidget.h"
#include "SlideshowWidget.generated.h"

class UBorder;
class UImage;
class UInputLabelWidget;
class UOverlay;
class USlideshowImageSet;
class UTextBlockBase;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USlideshowWidget : public UConversationBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveInputLabelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* BodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MainOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BodyBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PrimaryImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelWidget* InputLabelBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelWidget* InputLabelForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* MissingImageTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2D*> Textures;
    
public:
    USlideshowWidget();

    UFUNCTION(BlueprintCallable)
    void SetSlideshowSubtitlesForceEnabled(bool bForceEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSlideshowImagesAsset(USlideshowImageSet* ImageSet);
    
    UFUNCTION(BlueprintCallable)
    void SetSlideshowImageKey(const FString& ImageKey);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCinematicSubtitleSettingChanged(bool bVisibleIn);
    
};

