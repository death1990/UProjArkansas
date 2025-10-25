#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CompanionBehaviorsWidget.generated.h"

class UCompanionBehaviorOptionWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionBehaviorsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionBehaviorOptionWidget* FollowDistanceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionBehaviorOptionWidget* WeaponPreferenceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionBehaviorOptionWidget* CombatModeWidget;
    
public:
    UCompanionBehaviorsWidget();

};

