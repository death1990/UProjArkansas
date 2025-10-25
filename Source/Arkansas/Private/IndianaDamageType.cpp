#include "IndianaDamageType.h"

UIndianaDamageType::UIndianaDamageType() {
    this->Type = EIndianaDamageType::Count;
    this->Texture = NULL;
    this->DeathPriority = 0;
    this->ReceiveDamageStat = NULL;
    this->DeathSpellStatusEffect = NULL;
    this->DeathSpell = NULL;
    this->OnHitSpell = NULL;
    this->OnHitSpellChance = 0.10f;
    this->SpellChanceStat = NULL;
    this->OnMaxStacksSpell = NULL;
    this->MaxSpellStacks = 40;
    this->MaxSpellStacksResistant = 20;
}





