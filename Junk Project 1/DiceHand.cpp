#include "DiceHand.h"
int DiceHand::getHandSize() const
{
    return handSize;
}

Die* DiceHand::getDice() const
{
    return dice;
}

void DiceHand::setHandSize(int size)
{
    handSize = size;
}

void DiceHand::rollDie(int dieNum)
{

    if (dieNum >= 0 && dieNum < handSize)
    {
        dice[dieNum].roll();
    }
}

void DiceHand::rollAllDice()
{
    for (int i = 0; i < handSize; i++)
    {
        dice[i].roll();
    }
}

string DiceHand::displayDieHand() const
{
    string result = "Dice Hand:\n";
    for (int i = 0; i < handSize; i++)
    {
        result += "  Die " + to_string(i + 1) + ": " +
            dice[i].description() + "\n";
    }
    return result;
}