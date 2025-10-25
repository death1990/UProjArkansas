#pragma once
#include "CoreMinimal.h"
#include "BaseMapEntryWidget.h"
#include "PlayerLocationMapWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UPlayerLocationMapWidget : public UBaseMapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlayerImage;
    
public:
    UPlayerLocationMapWidget();

};

