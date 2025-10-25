#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Templates/SubclassOf.h"
#include "OEIWorldScriptActorReferenceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OEIWORLDSCRIPTACTOR_API FOEIWorldScriptActorReferenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PropertyGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ExpectedType;
    
    FOEIWorldScriptActorReferenceData();
};

