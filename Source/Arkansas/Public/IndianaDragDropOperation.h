#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=DragDropOperation -FallbackName=DragDropOperation
#include "Templates/SubclassOf.h"
#include "IndianaDragDropOperation.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UIndianaDragDropOperation : public UDragDropOperation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DefaultDragVisualClass;
    
    UIndianaDragDropOperation();

};

