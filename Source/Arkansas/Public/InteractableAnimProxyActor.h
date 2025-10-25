#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.h"
#include "OnInteractCompleteDelegateDelegate.h"
#include "OwAnimationProxyActor.h"
#include "InteractableAnimProxyActor.generated.h"

class UAkComponent;
class UInteractableComponent;

UCLASS(Blueprintable)
class ARKANSAS_API AInteractableAnimProxyActor : public AOwAnimationProxyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractCompleteDelegate OnInteractionComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractCompleteDelegate OnInteractionAnimComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInteractionType> InteractionTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AInteractableAnimProxyActor(const FObjectInitializer& ObjectInitializer);

};

