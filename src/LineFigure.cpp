#include "LineFigure.h"

LineFigure::LineFigure()
{
    //ctor
}

LineManipulator* LineFigure::CreateManipulator() {
    LineManipulator* line_manip = new LineManipulator();

    return line_manip;
}

LineFigure::~LineFigure()
{
    //dtor
}
