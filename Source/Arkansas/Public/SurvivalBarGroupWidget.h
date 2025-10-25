#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.h"
#include "IndianaUserWidget.h"
#include "SurvivalBarGroupWidget.generated.h"

class USurvivalBarWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USurvivalBarGroupWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USurvivalBarWidget* HungerBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USurvivalBarWidget* ThirstBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USurvivalBarWidget* SleepBar;
    
public:
    USurvivalBarGroupWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSubSurvivalBarUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnDifficultyChanged(EGameDifficulty NewDifficulty);
    
};

