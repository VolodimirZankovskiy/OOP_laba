
#include "Traumatology.h"

Traumatology::Traumatology(std::string loc, int floor, int room, int costs, std::string perks)
    : Hospital(loc,floor,room), cost{costs}, perk{perks} {}