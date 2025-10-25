#pragma once
#include "CoreMinimal.h"
#include "OnNavLinkEndReachedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNavLinkEndReachedDelegate, const uint32, SegmentIndex, const uint32, PathLength);

