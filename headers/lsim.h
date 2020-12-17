#ifndef LSIM_H
#define LSIM_H

#include "classes/game.h"
#include "classes/mainCharacter.h"
#include "classes/parent.h"
#include "classes/person.h"
#include "classes/vehicle.h"
#include "classes/school.h"
#include "classes/classmate.h"
#include "classes/teacher.h"

#include "io/inint.h"
#include "io/instring.h"
#include "io/menu.h"

#include "generateStat.h"
#include "relationType.h"

namespace lsim {
	constexpr bool MALE = false;
	constexpr bool FEMALE = true;
	
	constexpr int RELATIONNULL = 0;
	constexpr int RELATIONSELF = 1;
	constexpr int RELATIONMOTHER = 2;
	constexpr int RELATIONFATHER = 3;

	constexpr int SCHOOLNULL = 0;
	constexpr int SCHOOLELEMENTARY = 1;
	constexpr int SCHOOLMIDDLE = 2;
	constexpr int SCHOOLHIGH = 3;
	constexpr int SCHOOLCOLLEGE = 4;
} // namespace lsim

#endif // ifndef LSIM_H