#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "MinimapThreatIndicatorWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UMinimapThreatIndicatorWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ThreatImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnawareHostileOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwareHostileOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndicatorIndexFromTopCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnLeftSide;
    
public:
    UMinimapThreatIndicatorWidget();

};

