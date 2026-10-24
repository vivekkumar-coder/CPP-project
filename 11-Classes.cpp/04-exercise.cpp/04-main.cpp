#include "04-exercise.h"
#include <iostream>

using namespace std;

int main()
{
  string value = "Hello";
  TextBox textBox;
  textBox.setValue(value);
  cout << "Value: " << textBox.getValue() << endl;
}