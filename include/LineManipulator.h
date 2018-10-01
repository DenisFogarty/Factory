#ifndef LINEMANIPULATOR_H
#define LINEMANIPULATOR_H

#include <iostream>

#include "Manipulator.h"

using namespace std;

class LineManipulator : public Manipulator
{
    public:
        LineManipulator();
        virtual ~LineManipulator();

        void DownClick();
        void Drag();
        void UpClick();

    protected:

    private:
};

#endif // LINEMANIPULATOR_H
