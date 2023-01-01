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
   discount=(amount*10)/100;
   discounted_amount=amount-discount;
   cout << "amount: "<<discounted_amount;
   }
  if(day=="monday")
   {
   int monday_discount;
   int monday_discounted_amount;
   monday_discount=(amount*6)/100;
   monday_discounted_amount=amount-monday_discount;
   cout << "amount: "<<  monday_discounted_amount;
   }
  if(day=="tuesday")
   {
   int tuesday_discount;
   int tuesday_discounted_amount;
   tuesday_discount=(amount*6)/100;
   tuesday_discounted_amount=amount-tuesday_discount;
   cout << "amount: "<<  tuesday_discounted_amount;
   }
  if(day=="wednesday")
   {
   int wednesday_discount;
   int wednesday_discounted_amount;
   wednesday_discount=(amount*6)/100;
   wednesday_discounted_amount=amount-wednesday_discount;
   cout << "amount: "<<  wednesday_discounted_amount;
   }
  if(day=="thrusday")
   {
   int thrusday_discount;
   int thrusday_discounted_amount;
   thrusday_discount=(amount*6)/100;
   thrusday_discounted_amount=amount-thrusday_discount;
   cout << "amount: "<<  thrusday_discounted_amount;
   }
  if(day=="friday")
   {
   int friday_discount;
   int friday_discounted_amount;
   friday_discount=(amount*6)/100;
   friday_discounted_amount=amount-friday_discount;
   cout << "amount: "<<  friday_discounted_amount;
   }
  if(day=="saturday")
   {
   int saturday_discount;
   int saturday_discounted_amount;
   saturday_discount=(amount*6)/100;
   saturday_discounted_amount=amount-saturday_discount;
   cout << "amount: "<<  saturday_discounted_amount;
   }



}
