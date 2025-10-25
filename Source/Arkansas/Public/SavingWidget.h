#pragma once
#include "CoreMinimal.h"
#include "ESaveGameResult.h"
#include "ESaveGameType.h"
#include "IndianaUserWidget.h"
#include "SavingWidget.generated.h"

class UInvalidationBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USavingWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInvalidationBox* MainInvalidationBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumSecondsToRun;
    
public:
    USavingWidget();

    UFUNCTION(BlueprintCallable)
    void ShowSavingWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHUDVisibilityChanged(bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void HideSavingWidget(ESaveGameResult SaveGameResult, ESaveGameType SaveGameType);
    
};

