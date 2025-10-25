#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CCAptitudeListWidget.generated.h"

class UButtonGroup;
class UCCAptitudeListEntry;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCAptitudeListWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UButtonGroup* ButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* DetailContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCCAptitudeListEntry> EntryClass;
    
public:
    UCCAptitudeListWidget();

};

