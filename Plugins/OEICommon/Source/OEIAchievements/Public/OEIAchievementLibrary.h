#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AchievementReference.h"
#include "OEIAchievementLibrary.generated.h"

UCLASS(Blueprintable)
class OEIACHIEVEMENTS_API UOEIAchievementLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIAchievementLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAchievementReference MakeAchievementReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetAchievementID(const FAchievementReference& Achievement);
    
};

