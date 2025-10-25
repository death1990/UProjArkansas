#pragma once
#include "CoreMinimal.h"
#include "ExpansionOptions.h"
#include "IndianaUserWidget.h"
#include "TimingSettings.h"
#include "BaseExpandingWidget.generated.h"

class UBorder;
class UOverlay;
class USizeBox;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UBaseExpandingWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* FadeWidgetsVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BackgroundBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ExpandingSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpansionOptions VerticalExpanion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpansionOptions HorizontalExpansion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimingSettings TimingSettings;
    
public:
    UBaseExpandingWidget();

};

