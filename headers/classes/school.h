#ifndef SCHOOL_H
#define SCHOOL_H

#include "../lsim.h"
#include "./teacher.h"
#include "./classmate.h"
#include "./mainCharacter.h"

namespace lsim {
	class mainCharacter;
	class School {
		public:
			School(lsim::mainCharacter *nSelf, int nSchoolType = lsim::SCHOOLNULL, int nCurrentYear = 0);
			int updateGrades();
			void putEfforts(bool efforts = true);
			void goToMenu();
		private:
			std::string name;
			int schoolType;
			int currentYear;
			int avgGrades;
			int efforts;
			lsim::mainCharacter *self;
			lsim::Teacher teacher;
			std::vector<lsim::Classmate> classmates;
			lsim::io::Menu classmatesMenu;
			lsim::io::Menu schoolMenu;
	}; // class School
} // namespace lsim

#endif // ifndef SCHOOL_H