#include<iostream>
using namespace std;

int main()
{
  double sales = 95000;
  cout<<"Sales : "<<sales<<endl;

  const double stateTaxRate = 0.04;
  double stateTax= sales*stateTaxRate;
  cout<<"State Tax : "<< stateTax<<endl;

  const double countryTaxRate=0.02;
  double countryTax = countryTaxRate * sales;
  cout<<"Country Tax : "<< countryTax<<endl;

  double totalTax = countryTax+stateTax;
  cout<<"Total Tax : "<<totalTax<<endl<<endl;




  // without format
  std::cout<<"Sales = "<<" $"<<sales
      <<"\nState Tax ("<<4<<"%) = "<<0.04*95000<<"\n"
      <<"Country Tax ("<<2<<"%) = "<<0.02*95000<<"\n"
      <<"Total Tax = "<<95000*(0.04+0.02);

  return 0;
}