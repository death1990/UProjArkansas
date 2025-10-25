#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "GenericCollapsableList.generated.h"

class UExpandableAreaBase;
class UGenericCollapsableListEntry;
class UTextBlockBase;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UGenericCollapsableList : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString ListTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGenericCollapsableListEntry> ListEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* NewEntryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExpandableAreaBase* ExpandableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* EntryContainer;
    
public:
    UGenericCollapsableList();

protected:
    UFUNCTION(BlueprintCallable)
    void ExpandableAreaExpansionChanged(UExpandableAreaBase* Area, bool bIsExpanded);
    
};

