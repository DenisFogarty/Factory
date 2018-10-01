#ifndef FIGURE_H
#define FIGURE_H

#include "Manipulator.h"

class Figure
{
    public:
        Figure();
        virtual ~Figure();

        virtual Manipulator* CreateManipulator() = 0;

    protected:

    private:
};

#endif // FIGURE_H
