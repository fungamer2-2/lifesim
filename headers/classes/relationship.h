#ifndef RELATIONSHIP_H
#define RELATIONSHIP_H

#include "./person.h"
#include "../lsim.h"

namespace lsim {
	class Relationship {
		public:
			Relationship(lsim::Person *nSelf, short int nType = lsim::RELATIONNULL);
			virtual ~Relationship() = default;
			virtual void goToMenu();
			virtual short int ageAYear();
		private:
			short int relationType;
			lsim::Person *self;
			lsim::io::Menu menu;
	}; // class Relationship
} // namespace lsim

#endif // ifndef RELATIONSHIP_H