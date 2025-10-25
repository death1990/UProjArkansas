#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SelectionInfoSeperatorWidget.generated.h"

class UResponseHeaderSeperator;
class UTextBlockBase;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API USelectionInfoSeperatorWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResponseHeaderSeperator* AndOrSeperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* AndOrText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BackgroundDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AndSeparatorLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AndSeparatorRight;
    
public:
    USelectionInfoSeperatorWidget();

};

