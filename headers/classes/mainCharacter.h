#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include "parent.h"
#include "school.h"

namespace lsim {
    class mainCharacter : public lsim::Person {
        friend class lsim::School;
        public:
            mainCharacter();
            ~mainCharacter();
            short int getHealth();
            short int updateHealth(short int offset);
            void goToMenu();
            short int ageAYear();
        private:
            void removeOccupation(int index);
            short int health;
            lsim::Parent parents[2];
            lsim::io::Menu relationshipsMenu;
            lsim::io::Menu occupationsMenu;
            std::vector<Person *> relationships;
            std::vector<lsim::Occupation *> occupations;
    }; // class mainCharacter
} // namespace lsim

#endif // ifndef MAINCHARACTER_H