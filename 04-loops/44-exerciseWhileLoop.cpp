#include<iostream>
using namespace std;

int main()
{
  int number=0;

  const int secretNumber=5;
  while(number!=secretNumber){
    cout<<"Guess : ";
    cin>>number;
  }
  return 0;
}