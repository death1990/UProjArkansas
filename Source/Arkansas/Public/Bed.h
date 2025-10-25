#pragma once
#include "CoreMinimal.h"
#include "InteractableAnimProxyActor.h"
#include "Templates/SubclassOf.h"
#include "Bed.generated.h"

class USpell;

UCLASS(Blueprintable)
class ABed : public AInteractableAnimProxyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> RestSpell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHours;
    
public:
    ABed(const FObjectInitializer& ObjectInitializer);

};

