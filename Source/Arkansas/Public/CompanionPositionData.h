#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CompanionPositionData.generated.h"

class AActor;

UCLASS(Blueprintable)
class UCompanionPositionData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PositionActor;
    
public:
    UCompanionPositionData();

private:
    UFUNCTION(BlueprintCallable)
    void OnTeleportCompleted(bool bSuccess);
    
};

