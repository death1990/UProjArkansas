#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "WireInterface.h"
#include "WirePowerChangedDelegate.h"
#include "WireComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UWireComponent : public UActorComponent, public IWireInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWirePowerChanged WirePowerChanged;
    
    UWireComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WireSetPower(const FGuid& WireGuid, bool bWireEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWireEnabled(const FGuid& WireGuid) const;
    
    UFUNCTION(BlueprintCallable)
    void DisconnectWire(const FGuid& WireGuid);
    
    UFUNCTION(BlueprintCallable)
    void ConnectWire(const FGuid& WireGuid, bool bWireEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllWiresEnabled() const;
    

    // Fix for true pure virtual functions not being implemented
};

