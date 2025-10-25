#pragma once
#include "CoreMinimal.h"
#include "BranchingLootList.h"
#include "StaticLootList.generated.h"

UCLASS(Blueprintable)
class UStaticLootList : public UBranchingLootList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestricted;
    
public:
    UStaticLootList();

};

