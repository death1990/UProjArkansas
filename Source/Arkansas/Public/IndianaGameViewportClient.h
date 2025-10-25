#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "IndianaGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class UIndianaGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UIndianaGameViewportClient();

};

