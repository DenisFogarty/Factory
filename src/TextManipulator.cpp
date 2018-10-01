#include "TextManipulator.h"

TextManipulator::TextManipulator()
{
    //ctor
}

void TextManipulator::DownClick() {
    cout << "Clicked down text" << endl;
}

void TextManipulator::Drag() {
    cout << "Dragged text" << endl;
}

void TextManipulator::UpClick() {
    cout << "Released click text" << endl;
}

TextManipulator::~TextManipulator()
{
    //dtor
}
