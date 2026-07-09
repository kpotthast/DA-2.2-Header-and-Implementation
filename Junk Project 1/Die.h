#pragma once
#include <string>
using namespace std;

class Die
{
private:

    int numberOfSides;
    int faceValue;

public:

    Die()
    {
        numberOfSides = 6;
        faceValue = 1;
    }

    int getNumberOfSides() const;
    int getFaceValue() const;
    void setNumberOfSides(int sides);
    void setFaceValue(int value);
    void roll();
    string description() const;
};

