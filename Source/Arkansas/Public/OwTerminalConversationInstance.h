#pragma once
#include "CoreMinimal.h"
#include "OwConversationInstance.h"
#include "TerminalExitJumpToNodeEvent.h"
#include "OwTerminalConversationInstance.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable)
class ARKANSAS_API UOwTerminalConversationInstance : public UOwConversationInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TerminalWorldActorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ScreenOffMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ScreenOnMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScreenMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScreenActivationParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTerminalExitJumpToNodeEvent> ExitJumpToNodeEvents;
    
public:
    UOwTerminalConversationInstance();

};

