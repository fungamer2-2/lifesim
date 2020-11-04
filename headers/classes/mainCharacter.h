#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include "parent.h"

namespace lsim {
    class mainCharacter : public lsim::Person {
        public:
            mainCharacter();
            short int getHealth();
            short int updateHealth(short int offset);
            void goToMenu();
            short int ageAYear();
        private:
            short int health;
            lsim::Parent parents[2];
            lsim::io::Menu relationshipsMenu;
            std::vector<Person *> relationships;
    }; // class mainCharacter
} // namespace lsim

#endif // ifndef MAINCHARACTER_H