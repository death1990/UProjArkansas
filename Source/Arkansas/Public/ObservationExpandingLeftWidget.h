#pragma once
#include "CoreMinimal.h"
#include "BaseExpandingWidget.h"
#include "EFadeState.h"
#include "ObservationExpandingLeftWidget.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class UObservationExpandingLeftWidget : public UBaseExpandingWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ObservationContainer;
    
public:
    UObservationExpandingLeftWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFadeStateChanged(EFadeState FadeState);
    
};

