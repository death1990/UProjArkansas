#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "GenericCollapsableListContainer.generated.h"

class UGenericCollapsableList;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UGenericCollapsableListContainer : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ListVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGenericCollapsableList> ListWidgetClass;
    
public:
    UGenericCollapsableListContainer();

};

