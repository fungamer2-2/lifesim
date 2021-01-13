#ifndef LSIM_H
#define LSIM_H

namespace lsim {
	constexpr bool MALE = false;
	constexpr bool FEMALE = true;
	
	constexpr short int RELATIONNULL = 0;
	constexpr short int RELATIONSELF = 1;
	constexpr short int RELATIONMOTHER = 2;
	constexpr short int RELATIONFATHER = 3;
	constexpr short int RELATIONTEACHER = 4;
	constexpr short int RELATIONCLASSMATE = 5;
	constexpr short int RELATIONFRIEND = 6;
	
	constexpr short int OCCUPATIONNULL = 0;
	constexpr short int SCHOOLNULL = 1;
	constexpr short int SCHOOLELEMENTARY = 2;
	constexpr short int SCHOOLMIDDLE = 3;
	constexpr short int SCHOOLHIGH = 4;
	constexpr short int SCHOOLCOLLEGE = 5;
	constexpr short int JOBNULL = 6;

	constexpr int LAST = -1;
} // namespace lsim

#endif // ifndef LSIM_H