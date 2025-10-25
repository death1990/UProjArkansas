#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "ReticleIndicatorParentBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "DamageIndicatorWidget.generated.h"

class UDamageIndicatorEntryWidget;
class UDamageThresholdDataAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UDamageIndicatorWidget : public UReticleIndicatorParentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageIndicatorEntryWidget> EntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageThresholdDataAsset* DamageThresholdData;
    
public:
    UDamageIndicatorWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerTakesDamage(const FCauseDamageInfo& DamageInfo);
    
};

