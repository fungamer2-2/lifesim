#ifndef PARENTSHIP_H
#define PARENTSHIP_H

#include "./relationship.h"

namespace lsim {
	class Parentship : public lsim::Relationship {
		public:
			Parentship(lsim::Person *nSelf);
		private:
	}; // class Parentship
} // namespace lsim

#endif // ifndef PARENTSHIP_H