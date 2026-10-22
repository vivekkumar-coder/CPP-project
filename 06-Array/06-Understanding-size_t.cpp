#include <iostream>
#include <limits>

using namespace std;

int main()
{
  // size_t = unsigned long long
  int numbers[] = {10, 20, 30};

  cout << sizeof(int) << endl;
  cout << sizeof(size_t) << endl;    // it can store only positive value  ---> size - 8
  cout << sizeof(long long) << endl; // it can store positive and negative value  ---> size - 8

  // numeric_limit
  cout << " INT : "
       << numeric_limits<int>::min() << "    -    "
       << numeric_limits<int>::max() << endl;

  cout << " LONG : "
       << numeric_limits<long>::min() << "    -    "
       << numeric_limits<long>::max() << endl;

  cout << " LONG LONG : "
       << numeric_limits<long long>::min() << "    -    "
       << numeric_limits<long long>::max() << endl;

  cout << " size_t : "
       << numeric_limits<size_t>::min() << "    -    "
       << numeric_limits<size_t>::max() << endl;

  return 0;
}