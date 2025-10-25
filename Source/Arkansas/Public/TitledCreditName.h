#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "BasicCreditName.h"
#include "TitledCreditName.generated.h"

USTRUCT(BlueprintType)
struct FTitledCreditName : public FBasicCreditName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString TitleLocString;
    
    ARKANSAS_API FTitledCreditName();
};

