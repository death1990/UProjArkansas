#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "IndianaUserWidget.h"
#include "CauseDamageReticleWidget.generated.h"

class UImage;
class UItem;
class UReticleHitMarkerData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCauseDamageReticleWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReticleHitMarkerData* ReticleHitMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HitCrosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* KillCrosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExclusiveHitVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowKillTime;
    
public:
    UCauseDamageReticleWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(UItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnCauseDamage(const FCauseDamageInfo& CauseDamageInfo);
    
};

