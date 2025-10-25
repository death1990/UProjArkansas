#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SelectionInfoRepStandingBar.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UTextBlockBase;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API USelectionInfoRepStandingBar : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OffsetParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RepTargetEnabledParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RepTargetPositionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepBarMaterialStandingModifier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* FactionStandingTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ReputationProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ReputationBarMaterial;
    
public:
    USelectionInfoRepStandingBar();

};

