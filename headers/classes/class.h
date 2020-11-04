#ifndef CLASS_H
#define CLASS_H

#include "school.h"
#include "classmate.h"
#include "teacher.h"

namespace lsim {
	class Class {
		public:
			
		private:
			std::vector<lsim::Classmate> classmates;
			lsim::Teacher teacher;
	}; // class Class
} // namespace lsim

#endif // ifndef CLASS_H