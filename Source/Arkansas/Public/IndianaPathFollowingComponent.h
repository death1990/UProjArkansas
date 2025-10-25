#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=PathFollowingComponent -FallbackName=PathFollowingComponent
#include "AIPossessable.h"
#include "ETraverseType.h"
#include "IndianaPathFollowingComponent.generated.h"

class ALadder;
class AReservableNavLink;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIndianaPathFollowingComponent : public UPathFollowingComponent, public IAIPossessable {
    GENERATED_BODY()
public:
    UIndianaPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnNavLinkTraversalStarted(ETraverseType TraverseType, int32 NavLinkDirection, AReservableNavLink* ReservableNavLink, ALadder* ClimbLadder);
    
    UFUNCTION(BlueprintCallable)
    void OnCapsuleSizeChange();
    
    UFUNCTION(BlueprintCallable)
    void EndStationaryRotate();
    

    // Fix for true pure virtual functions not being implemented
};

