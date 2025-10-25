#pragma once
#include "CoreMinimal.h"
#include "GameplayTagAndEvent.h"
#include "SubCategoryToAudioEvent.generated.h"

USTRUCT(BlueprintType)
struct FSubCategoryToAudioEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagAndEvent> AudioEvents;
    
    ARKANSAS_API FSubCategoryToAudioEvent();
};

