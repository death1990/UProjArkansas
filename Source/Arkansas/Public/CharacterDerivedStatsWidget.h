#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CharacterDerivedStatsWidget.generated.h"

class UDerivedStatWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCharacterDerivedStatsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDerivedStatWidget* Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDerivedStatWidget* Experience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDerivedStatWidget* CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDerivedStatWidget* HealthRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDerivedStatWidget* HeadArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDerivedStatWidget* BodyArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDerivedStatWidget* SprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDerivedStatWidget* CrouchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDerivedStatWidget* TacticalTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDerivedStatWidget* MerchantSkill;
    
public:
    UCharacterDerivedStatsWidget();

};

