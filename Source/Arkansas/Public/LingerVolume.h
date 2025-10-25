#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LingerTimestamp.h"
#include "PlayerEnteredLingerVolumeDelegate.h"
#include "PlayerExitedLingerVolumeDelegate.h"
#include "LingerVolume.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API ALingerVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerEnteredLingerVolume OnPlayerEnteredLingerVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerExitedLingerVolume OnPlayerExitedLingerVolume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestartsUponPlayerEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLingerTimestamp> TimeStamps;
    
public:
    ALingerVolume(const FObjectInitializer& ObjectInitializer);

};

