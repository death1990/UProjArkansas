#pragma once
#include "CoreMinimal.h"
#include "Container.h"
#include "Templates/SubclassOf.h"
#include "DebugContainer.generated.h"

class UItem;

UCLASS(Blueprintable)
class ADebugContainer : public AContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItem>> ItemClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipItemsWithoutDescriptions;
    
    ADebugContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AddDebugItems();
    
};

