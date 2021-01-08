#ifndef RELATIONSHIP_H
#define RELATIONSHIP_H

#include "./person.h"

namespace lsim {
	class Relationship {
		public:
			Relationship(lsim::Person *nSelf);
			virtual void goToMenu();
		private:
			lsim::Person *self;
			lsim::io::Menu menu;
	}; // class Relationship
} // namespace lsim

#endif // ifndef RELATIONSHIP_H