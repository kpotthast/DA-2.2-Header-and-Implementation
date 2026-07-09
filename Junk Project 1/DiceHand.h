#pragma once
#include "Die.h"
class DiceHand
{
private:

    Die* dice;
    int handSize;

public:

  
    DiceHand()
    {
        handSize = 5;
        dice = new Die[handSize];
    }

    ~DiceHand()
    {
        delete[] dice;
        dice = nullptr;
    }

    int getHandSize() const;
    Die* getDice() const;
    void setHandSize(int size);
    void rollDie(int dieNum);
    void rollAllDice();
    string displayDieHand() const;
};

