#include "OnCompanionCommand.h"

UOnCompanionCommand::UOnCompanionCommand() {
    this->EventType = ECompanionCommandEventType::Issued;
    this->EventTarget = ECompanionCommandEventTarget::Companion;
    this->Command = ECompanionCommand::Invalid;
    this->RequiredCompanionId = ESpecialObsidianID::None;
}


