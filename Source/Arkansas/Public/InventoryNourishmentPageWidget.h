#pragma once
#include "CoreMinimal.h"
#include "InventoryPageWidget.h"
#include "InventoryNourishmentPageWidget.generated.h"

class AActor;
class UAnimatingProgressBarWidget;
class UHealthComponent;
class UPerkInfoWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInventoryNourishmentPageWidget : public UInventoryPageWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateHealthChanges;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimatingProgressBarWidget* PlayerHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerkInfoWidget* PerkInfoWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHealthComponent> HealthComponent;
    
public:
    UInventoryNourishmentPageWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerMaxHealthChanged(UHealthComponent* HealthComponentIn, float PrevMaxHealth, float CurMaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHealthChanged(UHealthComponent* HealthComponentIn, float PrevNormalizedHealth, float CurrNormalizedHealth, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnPreviewHealthChanged(bool bIsPreviewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnHealthChanged(float NewHealth);
    
};

