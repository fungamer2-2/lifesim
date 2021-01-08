#ifndef LSIM_H
#define LSIM_H

namespace lsim {
	constexpr bool MALE = false;
	constexpr bool FEMALE = true;
	
	constexpr int RELATIONNULL = 0;
	constexpr int RELATIONSELF = 1;
	constexpr int RELATIONMOTHER = 2;
	constexpr int RELATIONFATHER = 3;
	constexpr int RELATIONTEACHER = 4;
	constexpr int RELATIONCLASSMATE = 5;
	constexpr int RELATIONFRIEND = 6;

	constexpr int OCCUPATIONNULL = 0;
	constexpr int SCHOOLNULL = 1;
	constexpr int SCHOOLELEMENTARY = 2;
	constexpr int SCHOOLMIDDLE = 3;
	constexpr int SCHOOLHIGH = 4;
	constexpr int SCHOOLCOLLEGE = 5;
	constexpr int JOBNULL = 6;

	constexpr int LAST = -1;
} // namespace lsim

#endif // ifndef LSIM_H