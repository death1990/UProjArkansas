#include "FactionListener.h"

UFactionListener::UFactionListener() {
    this->Faction = NULL;
    this->bCheckAttitude = false;
    this->Attitude = ETeamAttitude::Hostile;
    this->bAllowInanimateObjects = true;
}


