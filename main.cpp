#include <iostream>

#include "Figure.h"
#include "Manipulator.h"

#include "LineFigure.h"
#include "TextFigure.h"

#include "LineManipulator.h"
#include "TextManipulator.h"

using namespace std;

int main()
{
    Figure *new_line_figure = new LineFigure();
    Figure *new_text_figure = new TextFigure();

    Manipulator* new_line_manip = new_line_figure->CreateManipulator();
    Manipulator* new_text_manip = new_text_figure->CreateManipulator();

    new_line_manip->DownClick();
    new_line_manip->Drag();
    new_line_manip->UpClick();

    new_text_manip->DownClick();
    new_text_manip->Drag();
    new_text_manip->UpClick();

    cout << "Hello world!" << endl;
    return 0;
}
