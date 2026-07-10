#pragma once
#include "Die.h"
#include <string>
using namespace std;

class DiceHand
{
private:

    Die* dice;
    int handSize;

public:

    DiceHand();

    DiceHand(Die* diceArray, int size);

    ~DiceHand();

    int getHandSize() const;
    Die* getDice() const;

    void rollDie(int dieNum);
    void rollAllDice();
    string displayDieHand() const;
};