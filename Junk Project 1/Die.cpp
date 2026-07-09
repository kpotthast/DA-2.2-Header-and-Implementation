#include "Die.h"

int Die::getNumberOfSides() const
{
    return numberOfSides;
}

int Die::getFaceValue() const
{
    return faceValue;
}

void Die::setNumberOfSides(int sides)
{
    numberOfSides = sides;
}

void Die::setFaceValue(int value)
{
    faceValue = value;
}

void Die::roll()
{
    faceValue = (rand() % numberOfSides) + 1;
}

string Die::description() const
{
    return "Die with " + to_string(numberOfSides) +
        " sides, showing " + to_string(faceValue);
}