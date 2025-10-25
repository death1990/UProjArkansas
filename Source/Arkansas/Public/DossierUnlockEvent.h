#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=ScriptEvent -FallbackName=ScriptEvent
#include "DossierEntryGroup.h"
#include "DossierUnlockEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UDossierUnlockEvent : public UScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDossierEntryGroup EntriesToUnlock;
    
    UDossierUnlockEvent();

};

