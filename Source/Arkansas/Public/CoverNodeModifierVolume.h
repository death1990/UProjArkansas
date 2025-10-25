#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "CoverNodeModifierVolume.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API ACoverNodeModifierVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCoverNodes;
    
public:
    ACoverNodeModifierVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoverNodesDisabled(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void DisableCoverNodes(bool bDisable);
    
};

