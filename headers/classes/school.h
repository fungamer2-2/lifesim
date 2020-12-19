#ifndef SCHOOL_H
#define SCHOOL_H

#include "../lsim.h"
#include "./teacher.h"
#include "./classmate.h"

namespace lsim {
	class School {
		public:
			School(int nSchoolType = lsim::SCHOOLNULL, int nCurrentYear = 0);
			int updateGrades(lsim::Person &person);
			void putEfforts(bool efforts = true);
		private:
			std::string name;
			int schoolType;
			int currentYear;
			int avgGrades;
			int efforts;
			lsim::Teacher teacher;
			std::vector<lsim::Classmate> classmates;
	}; // class School
} // namespace lsim

#endif // ifndef SCHOOL_H