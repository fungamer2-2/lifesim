#ifndef SCHOOL_H
#define SCHOOL_H

#include "./teacher.h"
#include "./classmate.h"

namespace lsim {
	class School {
		public:
			School(int nSchoolType = lsim::SCHOOLNULL, int nCurrentYear = 0);
			int updateGrades(lsim::Person &person);
		private:
			std::string name;
			int schoolType;
			int currentYear;
			int avgGrades;
			lsim::Teacher teacher;
			std::vector<lsim::Classmate> classmates;
	}; // class School
} // namespace lsim

#endif // ifndef SCHOOL_H