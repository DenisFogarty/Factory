#ifndef LINEFIGURE_H
#define LINEFIGURE_H

#include <iostream>

#include "Figure.h"
#include "LineManipulator.h"

using namespace std;

class LineFigure : public Figure
{
    public:
        LineFigure();
        virtual ~LineFigure();

        LineManipulator* CreateManipulator();

    protected:

    private:
};

#endif // LINEFIGURE_H
