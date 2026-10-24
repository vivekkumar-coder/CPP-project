#include "04-exercise.h"
#include <iostream>
#include <string>

using namespace std;

void TextBox::setValue(string value)
{
  this->value = value;
}

string TextBox::getValue()
{
  return value;
}