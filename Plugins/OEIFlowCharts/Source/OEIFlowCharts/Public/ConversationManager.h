#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConversationNavigator.h"
#include "SpeakerBundle.h"
#include "ConversationManager.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FConversationNavigator> ConversationNavigatorPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FSpeakerBundle> OverrideSpeakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FConversationNavigator PeekNavigator;
    
public:
    UConversationManager();

};

