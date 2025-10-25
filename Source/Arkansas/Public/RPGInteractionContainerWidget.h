#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "RPGInteractionContainerWidget.generated.h"

class UBorder;
class URPGInteractableBaseEntryWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API URPGInteractionContainerWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ContentVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* LogicalOrContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEntriesToMake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URPGInteractableBaseEntryWidget> EntryClass;
    
public:
    URPGInteractionContainerWidget();

};

