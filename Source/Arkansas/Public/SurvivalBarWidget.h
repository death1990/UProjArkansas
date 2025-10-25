#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.h"
#include "ESurvivalBar.h"
#include "IndianaUserWidget.h"
#include "SurvivalBarWidget.generated.h"

class UImage;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USurvivalBarWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESurvivalBar SurvivalMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SurvivalIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* SurvivalProgressBar;
    
public:
    USurvivalBarWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDifficultyChanged(EGameDifficulty DifficultyIn);
    
};

