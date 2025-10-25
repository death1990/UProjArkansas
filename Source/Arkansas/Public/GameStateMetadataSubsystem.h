#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=FlowChartNode -FallbackName=FlowChartNode
#include "ELoadGameResult.h"
#include "OwGameInstanceSubsystem.h"
#include "GameStateMetadataSubsystem.generated.h"

class UOwConversationInstance;

UCLASS(Blueprintable)
class ARKANSAS_API UGameStateMetadataSubsystem : public UOwGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameStateMetadataSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnQueryLatestSaveComplete(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadComplete(const FString& Filename, ELoadGameResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnConversationInstanceNodeChanged(UOwConversationInstance* Instance, const FFlowChartNode& Node);
    
    UFUNCTION(BlueprintCallable)
    void OnConversationInstanceEnded(UOwConversationInstance* Instance);
    
};

