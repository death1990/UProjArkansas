#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EnviromentNode.generated.h"

class AEnviromentNode;
class AIndianaCharacter;

UCLASS(Blueprintable)
class AEnviromentNode : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<AEnviromentNode>> ReservationNodes;
    
public:
    AEnviromentNode(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void K2_SetOccupiedBy(AIndianaCharacter* InOccupier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsOccupiedBy(AIndianaCharacter* InOccupier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsOccupied();
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearOccupiedBy(AIndianaCharacter* InOccupier);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccupiedByOthers(AIndianaCharacter* InOccupier) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaCharacter* GetOccupier() const;
    
};

