#ifndef LSIM_H
#define LSIM_H

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