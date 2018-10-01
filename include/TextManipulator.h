#ifndef TEXTMANIPULATOR_H
#define TEXTMANIPULATOR_H

#include <iostream>

#include "Manipulator.h"

using namespace std;

class TextManipulator : public Manipulator
{
    public:
        TextManipulator();
        virtual ~TextManipulator();

        void DownClick();
        void Drag();
        void UpClick();

    protected:

    private:
};

#endif // TEXTMANIPULATOR_H
