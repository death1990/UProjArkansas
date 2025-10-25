#pragma once
#include "CoreMinimal.h"
#include "ECompanionActionTypeChatterParam.generated.h"

UENUM(BlueprintType)
enum class ECompanionActionTypeChatterParam : uint8 {
    VALERIE_CombatTrait,
    VALERIE_StrengthSupplementModule,
    VALERIE_FortitudeSupplementModule,
    Niles_Spotter,
    Niles_GhostArray,
    Niles_ForceEmitter,
    Niles_SmokescreenEmitter,
    Inez_FieldMedicine,
    Marisol_PortalCapacitor,
    Marisol_CombatAnalyzer,
    Marisol_EnergyTransmitter,
    Marisol_DiscombobulatorTransmitter,
    Aza_FlurryOfBlades,
    Aza_Camouflage,
    Aza_HealWhenDowned,
    Tristan_NonCombatTrait,
    Tristan_FairGuardian,
};

