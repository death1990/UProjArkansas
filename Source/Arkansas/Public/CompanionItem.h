#pragma once
#include "CoreMinimal.h"
#include "ArmorItem.h"
#include "ESpecialObsidianID.h"
#include "CompanionItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UCompanionItem : public UArmorItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionID;
    
public:
    UCompanionItem();

};

