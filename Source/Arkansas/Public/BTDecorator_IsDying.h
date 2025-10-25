#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_IsDying.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsDying : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeDeadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeDownState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeCompanions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeBeingRevived;
    
public:
    UBTDecorator_IsDying();

};

