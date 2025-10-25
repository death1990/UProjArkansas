#pragma once
#include "CoreMinimal.h"
#include "IndianaWidgetComponent.h"
#include "CompanionMoveToWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCompanionMoveToWidgetComponent : public UIndianaWidgetComponent {
    GENERATED_BODY()
public:
    UCompanionMoveToWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

