#ifndef RELATIONSHIP_H
#define RELATIONSHIP_H

#include "./person.h"

namespace lsim {
	class Relationship {
		public:
			Relationship(lsim::Person *nSelf);
			~Relationship();
			virtual void goToMenu();
		private:
			short int relationType;
			lsim::Person *self;
			lsim::io::Menu menu;
	}; // class Relationship
} // namespace lsim

#endif // ifndef RELATIONSHIP_H