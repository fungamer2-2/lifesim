#ifndef OCCUPATION_H
#define OCCUPATION_H

#include "../lsim.h"
#include "../io/menu.h"

namespace lsim {
	class mainCharacter;
	class Occupation {
		public:
			Occupation(lsim::mainCharacter *nSelf, int nIndex, int occupationType = lsim::OCCUPATIONNULL);
			virtual ~Occupation() = default;
			int putEfforts(bool efforts = true);
			int getType();
			std::string getName();
			virtual void goToMenu();
			virtual void passAYear();
		protected:
			void shift();
			std::string name;
			int type;
			int efforts;
			int index;
			lsim::mainCharacter *self;
			lsim::io::Menu menu;
		friend class lsim::mainCharacter;
	}; // class Occupation
} // namespace lsim

#endif // ifndef OCCUPATION_H