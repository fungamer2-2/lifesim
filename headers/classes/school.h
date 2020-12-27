#ifndef SCHOOL_H
#define SCHOOL_H

#include "./occupation.h"
#include "./teacher.h"
#include "./classmate.h"

namespace lsim {
	class School : public lsim::Occupation {
		public:
			School(lsim::mainCharacter *nSelf, int nSchoolType = lsim::SCHOOLNULL, int nCurrentYear = 0);
			int updateGrades();
			void goToMenu();
			void passAYear();
		private:
			int currentYear;
			int avgGrades;
			lsim::Teacher teacher;
			std::vector<lsim::Classmate> classmates;
			lsim::io::Menu classmatesMenu;
	}; // class School
} // namespace lsim

#endif // ifndef SCHOOL_H