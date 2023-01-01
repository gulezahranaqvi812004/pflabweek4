#include <iostream>
using namespace std;

void is_eligible(int age); 
main()
{
  int age;
  while(true)
  {
    cout << "Enter your age: ";
    cin  >> age;
      is_eligible(age);
  }
  
}
void is_eligible(int age)
{
  if(age>=18)
    {
     cout << "You are eligible to vote";
    }
    if(age<18)
    {
     cout << "You are not eligible to vote"<<endl;
    } 
}

