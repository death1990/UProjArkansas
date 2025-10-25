#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "StatsPerkSummaryWidget.generated.h"

class UPerkSummaryEntryWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStatsPerkSummaryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPerkSummaryEntryWidget> EntryClass;
    
public:
    UStatsPerkSummaryWidget();

};

