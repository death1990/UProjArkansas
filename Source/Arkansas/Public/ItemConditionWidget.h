#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ItemConditionWidget.generated.h"

class UTextBlockBase;

UCLASS(Blueprintable, EditInlineNew)
class UItemConditionWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TextBlock;
    
public:
    UItemConditionWidget();

};

