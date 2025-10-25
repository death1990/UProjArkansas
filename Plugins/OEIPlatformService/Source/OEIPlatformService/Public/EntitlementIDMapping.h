#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EntitlementID.h"
#include "EntitlementIDMapping.generated.h"

UCLASS(Blueprintable)
class OEIPLATFORMSERVICE_API UEntitlementIDMapping : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEntitlementID> EntitlementIDs;
    
    UEntitlementIDMapping();

};

