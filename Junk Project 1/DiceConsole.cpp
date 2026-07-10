#include "DiceConsole.h"
#include <iostream>

void DiceConsole::displayDie(Die* die)
{
    cout << die->description() << endl;
}

void DiceConsole::displayDice(Die* dice, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "  Die " << (i + 1) << ": " << dice[i].description() << endl;
    }
}

int DiceConsole::getUserChoice(string menu)
{
    cout << menu;
    int choice;
    cin >> choice;
    return choice;
}