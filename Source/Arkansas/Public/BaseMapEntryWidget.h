#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "IndianaUserWidget.h"
#include "BaseMapEntryWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBaseMapEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ZoomScaleBounds;
    
public:
    UBaseMapEntryWidget();

};

