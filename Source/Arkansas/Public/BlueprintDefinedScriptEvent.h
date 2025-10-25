#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=ScriptEvent -FallbackName=ScriptEvent
#include "BlueprintDefinedScript.h"
#include "BlueprintDefinedScriptEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UBlueprintDefinedScriptEvent : public UScriptEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintDefinedScript BlueprintDefinedScript;
    
public:
    UBlueprintDefinedScriptEvent();

};

