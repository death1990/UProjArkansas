#pragma once
#include "CoreMinimal.h"
#include "EARCC_CameraPosition.h"
#include "EARCC_CharacterRotation.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "UIAppearanceData.h"
#include "CCCharacterCustomizationBaseWdgt.generated.h"

class UARCC_CollapsibleList;
class UOptionSliderWidget;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCCharacterCustomizationBaseWdgt : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIAppearanceData> AssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRoundSliderToWhole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOptionSliderWidget> SliderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UARCC_CollapsibleList> SubcategoryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARCC_CameraPosition DefaultCameraPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARCC_CharacterRotation DefaultCharacterRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EntryContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTallPanel;
    
public:
    UCCCharacterCustomizationBaseWdgt();

};

