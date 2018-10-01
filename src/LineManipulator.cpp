#include "LineManipulator.h"

LineManipulator::LineManipulator()
{
    //ctor
}

void LineManipulator::DownClick() {
    cout << "Clicked down line" << endl;
}

void LineManipulator::Drag() {
    cout << "Dragged line" << endl;
}

void LineManipulator::UpClick() {
    cout << "Released click line" << endl;
}

LineManipulator::~LineManipulator()
{
    //dtor
}
