#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "RenderThreadAnimationWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class URenderThreadAnimationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AnimationImage;
    
public:
    URenderThreadAnimationWidget();

};

