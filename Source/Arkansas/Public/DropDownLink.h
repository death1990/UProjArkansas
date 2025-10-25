#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CustomNavLinkBase.h"
#include "DropDownLink.generated.h"

UCLASS(Blueprintable)
class UDropDownLink : public UCustomNavLinkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EdgeLocation;
    
public:
    UDropDownLink();

};

