#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ConversationRenderTargetWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UConversationRenderTargetWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RenderTargetImage;
    
public:
    UConversationRenderTargetWidget();

};

