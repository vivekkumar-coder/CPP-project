#include<iostream>
using namespace std;

int main()
{
  cout<<"Enter the temperature in celcius : ";
  double celcius;
  cin>>celcius;
  double frehneheit= 1.8*celcius+32;
  cout<<"Frehneheit : "<<frehneheit;

  return 0;
}