#pragma once
#include "CoreMinimal.h"
#include "ArmorItem.h"
#include "ArmorVisualProperties.h"
#include "Undersuit.generated.h"

class UBodyAppearances;
class UModAppearances;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUndersuit : public UArmorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModAppearances* UndersuitVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodyAppearances* UndersuitBodyAppearances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorVisualProperties UndersuitVisualProperties;
    
    UUndersuit();

};

