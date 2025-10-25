#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AIBehaviorClassUserBehaviorAbortedDelegate.h"
#include "AIBehaviorClassUserBehaviorCompletedDelegate.h"
#include "AIBehaviorClassUserBehaviorLoadClassDataDelegate.h"
#include "AIBehaviorClassUserBehaviorStartedDelegate.h"
#include "AIBehaviorClassUserFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ARKANSAS_API UAIBehaviorClassUserFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIBehaviorClassUserFunctionLibrary();

protected:
    UFUNCTION(BlueprintCallable)
    static bool K2_PushAIBehaviorClassToUser(UObject* User, UClass* BehaviorClass, const FString& IdentifierGuid, const int32 IdentifierIndex, const FAIBehaviorClassUserBehaviorLoadClassData& LoadClassDataDelegate, const FAIBehaviorClassUserBehaviorStarted& StartedDelegate, const FAIBehaviorClassUserBehaviorCompleted& CompletedDelegate, const FAIBehaviorClassUserBehaviorAborted& AbortedDelegate);
    
};

