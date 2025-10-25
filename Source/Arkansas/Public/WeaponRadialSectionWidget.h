#pragma once
#include "CoreMinimal.h"
#include "RadialSectionWidget.h"
#include "WeaponRadialSectionWidget.generated.h"

class UImage;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UWeaponRadialSectionWidget : public URadialSectionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
public:
    UWeaponRadialSectionWidget();

};

