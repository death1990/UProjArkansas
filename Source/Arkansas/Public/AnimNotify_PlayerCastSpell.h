#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Templates/SubclassOf.h"
#include "AnimNotify_PlayerCastSpell.generated.h"

class USpell;

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_PlayerCastSpell : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> SpellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<USpell>> SpellsByMeshTag;
    
public:
    UAnimNotify_PlayerCastSpell();

};

