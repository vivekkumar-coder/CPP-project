#include <iostream>
using namespace std;

int main()
{
  string str = "\"c:\\folderA\\folderB\\file.txt\"";
  cout << str << endl;

  // R"(\)"
  string str1 = R"("c:\folderA\folderB\file.txt")";
  cout << str1 << endl;
  return 0;
}