#pragma once
#include "CoreMinimal.h"
#include "IndianaWidgetComponent.h"
#include "StatusWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatusWidgetComponent : public UIndianaWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
public:
    UStatusWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

