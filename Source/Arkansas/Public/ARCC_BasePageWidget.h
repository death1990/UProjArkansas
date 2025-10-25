#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ARCC_BasePageWidget.generated.h"

class UARCC_AdditionalInfoContainerWidget;
class UARCC_MasterWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UARCC_BasePageWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInPreTutorialFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInPostTutorialFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCustomizationCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UARCC_AdditionalInfoContainerWidget* AdditionalInfoContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UARCC_MasterWidget* MasterWidget;
    
public:
    UARCC_BasePageWidget();

};

