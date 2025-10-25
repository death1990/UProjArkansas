#pragma once
#include "CoreMinimal.h"
#include "BaseNotificationObject.h"
#include "SkillSpeechCheckNotification.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class USkillSpeechCheckNotification : public UBaseNotificationObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* SkillTexture;
    
    USkillSpeechCheckNotification();

};

