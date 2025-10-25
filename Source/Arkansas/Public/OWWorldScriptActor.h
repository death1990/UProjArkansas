#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIWorldScriptActor -ObjectName=OEIWorldScriptActor -FallbackName=OEIWorldScriptActor
#include "OWWorldScriptActor.generated.h"

class UObsidianIDComponent;

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API AOWWorldScriptActor : public AOEIWorldScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* IDComponent;
    
public:
    AOWWorldScriptActor(const FObjectInitializer& ObjectInitializer);

};

