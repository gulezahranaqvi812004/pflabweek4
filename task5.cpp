#include <iostream>
using namespace std;

void is_even(int number); 
main()
{
  int number;
  while(true)
  {
  cout << "Enter a number: ";
  cin >> number;
  is_even(number);
  }
}
void is_even(int number)
{
    if(number%2==0)
    { 
     cout << "Number is even" << endl;
    }

    if(number%2!=0)
    { 
     cout << "Number is odd" << endl;
    }
  
}