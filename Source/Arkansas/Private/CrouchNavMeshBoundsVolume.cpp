#include "CrouchNavMeshBoundsVolume.h"
#include "OwNavModifierComponent.h"

ACrouchNavMeshBoundsVolume::ACrouchNavMeshBoundsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavModifierComponent = CreateDefaultSubobject<UOwNavModifierComponent>(TEXT("NavModifier"));
}


