#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CoverActionAnim.h"
#include "CoverAnimationsTPV.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class UCoverAnimationsTPV : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCoverActionAnim> CoverAnimations;
    
    UCoverAnimationsTPV();

};

