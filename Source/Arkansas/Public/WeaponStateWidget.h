#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "WeaponStateWidget.generated.h"

class UHorizontalBox;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UWeaponStateWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* WeaponValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* WeaponValueMaxTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* MaxAmmoContainer;
    
public:
    UWeaponStateWidget();

};

