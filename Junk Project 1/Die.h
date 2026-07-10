#pragma once
#include <string>
using namespace std;

class Die
{
private:

    const int numberOfSides;
    int faceValue;

public:

    Die(int sides = 6);

    int getNumberOfSides() const;
    int getFaceValue() const;

    void setFaceValue(int value);

    void roll();
    string description() const;
};