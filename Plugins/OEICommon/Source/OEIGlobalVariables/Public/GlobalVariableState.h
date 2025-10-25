#pragma once
#include "CoreMinimal.h"
#include "GlobalVariableState.generated.h"

USTRUCT(BlueprintType)
struct FGlobalVariableState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeprecated;
    
    OEIGLOBALVARIABLES_API FGlobalVariableState();
};

