#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "RankNotificationWidget.generated.h"

class UAnimatingProgressBarWidget;
class UImage;

UCLASS(Abstract, Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class ARKANSAS_API UDEPRECATED_RankNotificationWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RankImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimatingProgressBarWidget* AnimatingProgressBar;
    
public:
    UDEPRECATED_RankNotificationWidget();

};

