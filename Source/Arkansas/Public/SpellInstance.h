#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpellInstance.generated.h"

class UEventListener;
class USpell;

USTRUCT(BlueprintType)
struct FSpellInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> SpellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEventListener* OnApplyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEventListener* OnRemoveEvent;
    
public:
    ARKANSAS_API FSpellInstance();
};

