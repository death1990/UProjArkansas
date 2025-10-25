#pragma once
#include "CoreMinimal.h"
#include "EMeshTarget.h"
#include "EventEffect.h"
#include "HideMeshEventEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UHideMeshEventEffect : public UEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshTarget TargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideChildComponents;
    
public:
    UHideMeshEventEffect();

};

