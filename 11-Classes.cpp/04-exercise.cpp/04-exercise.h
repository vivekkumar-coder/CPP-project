#ifndef TEXTBOX
#define TEXTBOX

#include <string>
using namespace std;

class TextBox
{
public:
  void setValue(string value);
  string getValue();

private:
  string value;
};

#endif