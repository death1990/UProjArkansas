#pragma once
#include "CoreMinimal.h"
#include "DamageTypeColors.h"
#include "DamageTypeData.h"
#include "DamageTypeImages.h"
#include "EDamageFlags.h"
#include "EHitType.h"
#include "EIndianaDamageType.h"
#include "IndianaInterfaceUserWidget.h"
#include "IndianaTextBlockStyle.h"
#include "Templates/SubclassOf.h"
#include "DamageTextContainerWidget.generated.h"

class UCanvasPanel;
class UDamageEffectWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UDamageTextContainerWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageEffectWidget> DamageWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIndianaDamageType, FDamageTypeData> DamageTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHitType, FIndianaTextBlockStyle> FontForHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageTypeColors HealingColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaTextBlockStyle InvalidHitTypeFontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIndianaDamageType, FDamageTypeImages> DamageTypeImagesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTextScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompanionTextScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPositionAllEntriesAboveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCritAddsExclamation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageFlags WeakspotFlag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageFlags CriticalFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DamageTextCanvas;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDamageEffectWidget*> FreeWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDamageEffectWidget*> ActiveWidgets;
    
public:
    UDamageTextContainerWidget();

};

