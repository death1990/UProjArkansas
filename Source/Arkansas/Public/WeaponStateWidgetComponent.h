#pragma once
#include "CoreMinimal.h"
#include "IndianaWidgetComponent.h"
#include "WeaponStateWidgetComponent.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponStateWidgetComponent : public UIndianaWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FineAimScale;
    
public:
    UWeaponStateWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

