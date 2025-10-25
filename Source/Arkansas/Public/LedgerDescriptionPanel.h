#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "LedgerDescriptionPanel.generated.h"

class UScrollBox;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULedgerDescriptionPanel : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* DetailsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* HeaderBodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* MinorHeaderBodyText;
    
public:
    ULedgerDescriptionPanel();

};

