#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <person.h>
#include <parent.h>
class mainCharacter : public Person {
    public:
        mainCharacter(Parent *first, Parent *second);
        short int getHealth();
        short int updateHealth(short int offset);
    private:
        short int health;
};

#endif // ifndef MAINCHARACTER_H