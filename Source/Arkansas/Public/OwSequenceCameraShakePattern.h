#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=TemplateSequence -ObjectName=SequenceCameraShakePattern -FallbackName=SequenceCameraShakePattern
#include "OwSequenceCameraShakePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UOwSequenceCameraShakePattern : public USequenceCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyAsAbsolute;
    
    UOwSequenceCameraShakePattern();

};

