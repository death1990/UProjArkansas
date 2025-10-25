#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AIBehaviorTreeReference.h"
#include "AIBehaviorTreeReferenceAsset.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UAIBehaviorTreeReferenceAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIBehaviorTreeReference Root;
    
public:
    UAIBehaviorTreeReferenceAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAIBehaviorTreeReference GetBehaviorTreeReference() const;
    
};

