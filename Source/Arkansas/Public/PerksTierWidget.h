#pragma once
#include "CoreMinimal.h"
#include "EIndianaUIColorType.h"
#include "IndianaUserWidget.h"
#include "PerksTierWidget.generated.h"

class UHorizontalBox;
class UImage;
class UTextBlockBase;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPerksTierWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ImageContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TierImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TierImage2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TierImage3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TierImageBacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TierTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Silhouettes;
    
public:
    UPerksTierWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetTextOpacity(bool bUnlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetImageOpacity(bool bUnlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EIndianaUIColorType GetColorType(bool bUnlocked) const;
    
};

