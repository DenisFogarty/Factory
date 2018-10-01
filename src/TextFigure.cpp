#include "TextFigure.h"

TextFigure::TextFigure()
{
    //ctor
}

TextManipulator* TextFigure::CreateManipulator() {
    TextManipulator* text_manip = new TextManipulator();

    return text_manip;
}

TextFigure::~TextFigure()
{
    //dtor
}
