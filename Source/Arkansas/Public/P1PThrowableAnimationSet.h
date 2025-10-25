#pragma once
#include "CoreMinimal.h"
#include "PlayerThrowableAnimationSet.h"
#include "P1PThrowableAnimationSet.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class ARKANSAS_API UP1PThrowableAnimationSet : public UPlayerThrowableAnimationSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* LoopStartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* LoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ThrowAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* QuickThrowAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CancelAnim;
    
public:
    UP1PThrowableAnimationSet();

};

