#pragma once
#include "CoreMinimal.h"
#include "PendingNavLinkChunk.generated.h"

class AOwNavigationDataChunkActor;
class UNavMeshCustomNavLinkCollection;

USTRUCT(BlueprintType)
struct FPendingNavLinkChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOwNavigationDataChunkActor* ChunkActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNavMeshCustomNavLinkCollection* Collection;
    
    ARKANSAS_API FPendingNavLinkChunk();
};

