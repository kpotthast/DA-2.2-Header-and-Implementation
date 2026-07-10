//Kate Potthast
//CSII 
// July 10, 2026
// Daily Assignment 2.3

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Die.h"
#include "DiceHand.h"
#include "DiceConsole.h"
using namespace std;


void testDiceHand();

int main()
{
    // Seed the random number generator
    srand(time(0));

    cout << "===== Part 2: Die class =====" << endl;

    Die die1(6);
    Die die2(6);
    Die die3(6);

    die1.setFaceValue(1);
    die2.setFaceValue(1);
    die3.setFaceValue(1);

    die1.roll();
    die2.roll();
    die3.roll();

    cout << die1.description() << endl;
    cout << die2.description() << endl;
    cout << die3.description() << endl;

    cout << "\n===== Part 3: DiceHand class =====" << endl;

    DiceHand hand;

    cout << "\nInitial hand:" << endl;
    cout << hand.displayDieHand();

    hand.rollAllDice();
    cout << "\nAfter rolling all dice:" << endl;
    cout << hand.displayDieHand();

    hand.rollDie(0);
    hand.rollDie(hand.getHandSize() - 1);

    cout << "\nAfter rolling the first and last die:" << endl;
    cout << hand.displayDieHand();

    // Test function
    testDiceHand();

    return 0;
}

void testDiceHand()
{
    DiceConsole console;

    Die* twoDice = new Die[2];
    DiceHand hand(twoDice, 2);

    cout << "\n===== Part 4: DiceHand Test =====" << endl;

    cout << "\nHere are your dice:" << endl;
    console.displayDice(hand.getDice(), hand.getHandSize());

    bool playing = true;
    do
    {
        int choice = console.getUserChoice(
            "\nEnter 1 to re-roll, or 2 to stay: ");

        if (choice == 1)
        {
            hand.rollAllDice();
            cout << "\nNew roll:" << endl;
            console.displayDice(hand.getDice(), hand.getHandSize());

        }
        else
        {
            cout << "\nFinal dice:" << endl;
            console.displayDice(hand.getDice(), hand.getHandSize());
            playing = false;
        }
    } while (playing);


}