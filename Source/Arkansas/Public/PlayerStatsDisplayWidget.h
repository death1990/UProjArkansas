#pragma once
#include "CoreMinimal.h"
#include "BaseHUDWidget.h"
#include "PlayerStatsDisplayWidget.generated.h"

class UCharacterOverviewWidget;
class UMedInhalerNotificationWidget;
class UStatusEffectTagWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UPlayerStatsDisplayWidget : public UBaseHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCrashText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterOverviewWidget* CharacterOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMedInhalerNotificationWidget* MedInhalerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectTagWidget* StatusEffectOverview;
    
public:
    UPlayerStatsDisplayWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnWidgetResetEventTimer();
    
};

