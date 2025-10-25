#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "PlayerStatsWidget.generated.h"

class UCharacterInfoComponent;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPlayerStatsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* CurrencyValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* NameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* LevelTextBlock;
    
public:
    UPlayerStatsWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetXPRatio(float XPRatio);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelChanged(UCharacterInfoComponent* InCharacterInfoComponent, int32 NewLevel);
    
};

