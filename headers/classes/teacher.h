#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"

namespace lsim {
	class Teacher : public lsim::Person {
		public:
			Teacher();
			short int getSeverity();
		private:
			short int severity;
	}; // class Teacher
} // namespace lsim

#endif // ifndef TEACHER_H