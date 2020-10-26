#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <person.h>
#include <parent.h>

namespace lsim {
    class mainCharacter : public Person {
        public:
            mainCharacter(Parent *first, Parent *second);
            short int getHealth();
            short int updateHealth(short int offset);
        private:
            short int health;
    }; // class mainCharacter
} // namespace lsim

#endif // ifndef MAINCHARACTER_H