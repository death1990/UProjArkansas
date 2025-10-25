#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IndianaStats.generated.h"

class URpgStat;

UCLASS(Blueprintable)
class UIndianaStats : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URpgStat*> NativeStats;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URpgStat* AttributeStats[9];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URpgStat* SkillStats[24];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URpgStat* ConversationSkillStats[24];
    
public:
    UIndianaStats();

};

