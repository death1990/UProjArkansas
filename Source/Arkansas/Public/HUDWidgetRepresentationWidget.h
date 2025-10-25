#pragma once
#include "CoreMinimal.h"
#include "EScaleDirection.h"
#include "IndianaUserWidget.h"
#include "HUDWidgetRepresentationWidget.generated.h"

class UImage;
class UOverlay;
class UScaleBox;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UHUDWidgetRepresentationWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ContainerOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* WidgetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ActiveHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ScaleDirectionIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DisplayImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScaleDirection ScaleDirection;
    
public:
    UHUDWidgetRepresentationWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeInactive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeActive();
    
};

