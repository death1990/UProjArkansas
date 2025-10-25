#include "OwNavMesh.h"
#include "CustomNavLinkRegistry.h"

AOwNavMesh::AOwNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomNavLinkRegistryPtr = CreateDefaultSubobject<UCustomNavLinkRegistry>(TEXT("CustomNavLinkRegistry"));
}


