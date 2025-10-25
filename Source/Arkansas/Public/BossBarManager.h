#pragma once
#include "CoreMinimal.h"
#include "BaseHUDWidget.h"
#include "Templates/SubclassOf.h"
#include "BossBarManager.generated.h"

class AIndianaCharacter;
class UBossBarInstance;
class UInvalidationBox;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBossBarManager : public UBaseHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInvalidationBox* MainInvalidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* InstanceVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBossBarInstance> BossBarInstanceClass;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AIndianaCharacter>, UBossBarInstance*> BossBars;
    
public:
    UBossBarManager();

};

