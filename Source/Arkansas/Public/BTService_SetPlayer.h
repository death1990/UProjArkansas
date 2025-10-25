#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTService_OwBase.h"
#include "BTService_SetPlayer.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UBTService_SetPlayer : public UBTService_OwBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PlayerCharacterKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PlayerLocationKey;
    
public:
    UBTService_SetPlayer();

};

