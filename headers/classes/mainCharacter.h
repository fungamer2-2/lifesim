#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <person.h>
#include <parent.h>
class mainCharacter : public Person {
    public:
        mainCharacter(Parent *first, Parent *second);
        short int getHappiness();
        void updateHappiness(short int offset);
        short int getHealth();
        void updateHealth(short int offset);
    private:
        short int happiness;
        short int health;
};

#endif // ifndef MAINCHARACTER_H