#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnMedKitUsed.generated.h"

class UEquipmentComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnMedKitUsed : public UEventListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoubleDose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireMatchingDoubleDose;
    
    UOnMedKitUsed();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMedKitUsed(UEquipmentComponent* EquipmentComponent, bool InDoubleDose);
    
};

