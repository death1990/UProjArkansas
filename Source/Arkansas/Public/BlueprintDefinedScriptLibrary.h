#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EBlueprintDefinedScriptCategory.h"
#include "BlueprintDefinedScriptLibrary.generated.h"

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UBlueprintDefinedScriptLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlueprintDefinedScriptCategory BlueprintDefinedScriptCategory;
    
    UBlueprintDefinedScriptLibrary();

};

