#include <iostream>
using namespace std;

void calculate_bill(string day, int amount); 
main()
{ 
  string day;
  int amount;
  cout << "Enter day: ";
  cin  >> day;
  cout << "Enter amount: ";
  cin  >> amount;
  calculate_bill(day,amount);
}
void calculate_bill(string day, int amount)
{
  if(day=="sunday")
   { 
   int discount;
   int discounted_amount;
   discount=amount/10;
   discounted_amount=amount-discount;
   cout << "amount: "<<discounted_amount;
   }
  if(day!="sunday")
   {
    cout<< "Your amount is: "<<amount<<endl;
   }

}
