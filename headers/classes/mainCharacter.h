#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <person.h>
class mainCharacter : public Person {
    public:
        mainCharacter(bool nSex = rand() % 2, short int nAge = 0, int nBalance = 0, short int nIntelligence = generateStat(), short int nCharisma = generateStat());
        short int getHappiness();
        void updateHappiness(short int offset);
        short int getHealth();
        void updateHealth(short int offset);
    private:
        short int happiness;
        short int health;
};

#endif // ifndef MAINCHARACTER_H