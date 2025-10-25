#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EAttribute.h"
#include "ESkill.h"
#include "CharacterLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UCharacterLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharacterLibrary();

    UFUNCTION(BlueprintCallable)
    static int32 GetSkillValue(AActor* Actor, ESkill Skill);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAttributeValue(AActor* Actor, EAttribute Attribute);
    
};

