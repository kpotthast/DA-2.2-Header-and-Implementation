#include <iostream>
#include "Die.h"
#include "DiceHand.h"
using namespace std;

int main()
{
    // Seed the random number generator 

    srand(time(0));


    cout << "===== Part 2: Die class =====" << endl;

    Die die1;
    Die die2;
    Die die3;

    die1.setNumberOfSides(6);
    die1.setFaceValue(1);

    die2.setNumberOfSides(6);
    die2.setFaceValue(1);

    die3.setNumberOfSides(6);
    die3.setFaceValue(1);

    // Roll each die
    die1.roll();
    die2.roll();
    die3.roll();

    // Display the results
    cout << die1.description() << endl;
    cout << die2.description() << endl;
    cout << die3.description() << endl;

    // In the main function, instantiate one die hand.
    // Display it to the user, roll it, display the new result to the user; 
    // then roll the first and last die in the hand, and display the new hand to the user.
    cout << "\n===== Part 3: DiceHand class =====" << endl;

    DiceHand hand;

    // Display it to the user
    cout << "\nInitial hand:" << endl;
    cout << hand.displayDieHand();

    // Roll all dice and display the new result
    hand.rollAllDice();
    cout << "\nAfter rolling all dice:" << endl;
    cout << hand.displayDieHand();

    // Roll the first and last die
    hand.rollDie(0);
    hand.rollDie(hand.getHandSize() - 1);

    // Display the new hand
    cout << "\nAfter rolling the first and last die:" << endl;
    cout << hand.displayDieHand();

    return 0;
}