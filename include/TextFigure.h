#ifndef TEXTFIGURE_H
#define TEXTFIGURE_H

#include <iostream>

#include "Figure.h"
#include "TextManipulator.h"

using namespace std;

class TextFigure : public Figure
{
    public:
        TextFigure();
        virtual ~TextFigure();

        TextManipulator* CreateManipulator();

    protected:

    private:
};

#endif // TEXTFIGURE_H
