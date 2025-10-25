#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "AIGroupBehaviorInstanceKit.h"
#include "AIGroupBehaviorVolume.generated.h"

class UAIGroupBehaviorInstanceKitComponent;
class UObsidianIDComponent;

UCLASS(Blueprintable)
class ARKANSAS_API AAIGroupBehaviorVolume : public AVolume, public IAIGroupBehaviorInstanceKit {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIGroupBehaviorInstanceKitComponent* AIGroupBehaviorInstanceKitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysIncludeCompanions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCookOnPlayerOverlap;
    
public:
    AAIGroupBehaviorVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

