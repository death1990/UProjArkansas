#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CompanionIconData.h"
#include "EAttribute.h"
#include "EConversationIconType.h"
#include "ESkill.h"
#include "ESpecialObsidianID.h"
#include "ESpeechFlavorTag.h"
#include "EStandingAdjustment.h"
#include "EUIPerkType.h"
#include "Templates/SubclassOf.h"
#include "ConversationIconsData.generated.h"

class UPerk;
class UTexture2D;

UCLASS(Blueprintable)
class ARKANSAS_API UConversationIconsData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EConversationIconType, TSoftObjectPtr<UTexture2D>> TextureMapMisc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkill, TSoftObjectPtr<UTexture2D>> TextureMapSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpeechFlavorTag, TSoftObjectPtr<UTexture2D>> TextureMapSpeechSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, TSoftObjectPtr<UTexture2D>> TextureMapAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialObsidianID, FCompanionIconData> TextureMapStateBasedCompanions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIPerkType, TSubclassOf<UPerk>> TextureMapPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStandingAdjustment, TSoftObjectPtr<UTexture2D>> TextureMapFactionStanding;
    
public:
    UConversationIconsData();

};

