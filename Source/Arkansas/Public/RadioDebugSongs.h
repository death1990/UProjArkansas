#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RadioDebugSongs.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class ARKANSAS_API URadioDebugSongs : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> Songs;
    
public:
    URadioDebugSongs();

};

