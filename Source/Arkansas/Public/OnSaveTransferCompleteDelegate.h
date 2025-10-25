#pragma once
#include "CoreMinimal.h"
#include "ESaveGameStorageProviderType.h"
#include "SaveTransferResult.h"
#include "OnSaveTransferCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSaveTransferComplete, ESaveGameStorageProviderType, Source, ESaveGameStorageProviderType, Target, const TArray<FSaveTransferResult>&, TransferResults);

