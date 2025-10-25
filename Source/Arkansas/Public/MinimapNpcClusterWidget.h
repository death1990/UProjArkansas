#pragma once
#include "CoreMinimal.h"
#include "BaseMinimapEntryWidget.h"
#include "MinimapNpcClusterWidget.generated.h"

class UImage;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinimapNpcClusterWidget : public UBaseMinimapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* RadiusSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FuzzyImage;
    
public:
    UMinimapNpcClusterWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRemovedAnimFinished();
    
};

