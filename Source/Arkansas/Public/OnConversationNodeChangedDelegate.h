#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=FlowChartNode -FallbackName=FlowChartNode
#include "OnConversationNodeChangedDelegate.generated.h"

class UOwConversationInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConversationNodeChanged, UOwConversationInstance*, ConversationInstance, const FFlowChartNode&, Node);

