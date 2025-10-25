#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TargetPoint -FallbackName=TargetPoint
#include "IndianaTargetPoint.generated.h"

class UObsidianIDComponent;

UCLASS(Blueprintable)
class AIndianaTargetPoint : public ATargetPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* IDComponent;
    
public:
    AIndianaTargetPoint(const FObjectInitializer& ObjectInitializer);

};

