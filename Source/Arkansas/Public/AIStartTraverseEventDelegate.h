#pragma once
#include "CoreMinimal.h"
#include "ETraverseType.h"
#include "AIStartTraverseEventDelegate.generated.h"

class ALadder;
class AReservableNavLink;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAIStartTraverseEvent, ETraverseType, TraverseType, int32, NavLinkDirection, AReservableNavLink*, ReservableNavLink, ALadder*, ClimbLadder);

