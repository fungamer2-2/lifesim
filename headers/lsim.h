#ifndef LSIM_H
#define LSIM_H

#include "classes/game.h"
#include "classes/mainCharacter.h"
#include "classes/parent.h"
#include "classes/person.h"
#include "classes/vehicle.h"

#include "io/inint.h"
#include "io/instring.h"
#include "io/menu.h"

#include "jsonsupport/readJSON.h"

#include "generateStat.h"
#include "relationType.h"

namespace lsim {
	const bool MALE = false;
	const bool FEMALE = true;
	
	const int RELATIONNULL = 0;
	const int RELATIONSELF = 1;
	const int RELATIONMOTHER = 2;
	const int RELATIONFATHER = 3;
}

#endif // ifndef LSIM_H