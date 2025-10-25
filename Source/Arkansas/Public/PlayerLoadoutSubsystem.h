#pragma once
#include "CoreMinimal.h"
#include "OwGameInstanceSubsystem.h"
#include "PlayerLoadoutSubsystem.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UPlayerLoadoutSubsystem : public UOwGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPlayerLoadoutSubsystem();

protected:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugState(const FName& StateAssetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLoadout(const FName& LoadoutName);
    
};

