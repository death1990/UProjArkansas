#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Templates/SubclassOf.h"
#include "AICastSpell_AnimNotify.generated.h"

class USpell;

UCLASS(Blueprintable, CollapseCategories)
class UAICastSpell_AnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> SpellType;
    
public:
    UAICastSpell_AnimNotify();

};

