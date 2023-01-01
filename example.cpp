#include <iostream>
using namespace std;

void add(); 
void product();

main()
{
  add();
  add();
  product();
}

void add()
{
  int number_1;
  int number_2;
  int sum;
  cout << "Enter a number: ";
  cin >> number_1;
  cout << "Enter second number: ";
  cin >> number_2;
  sum=number_1+number_2;
  cout << "Sum=  "<<sum <<endl; 

}

void product()
{
  int number_1;
  int number_2;
  int product; 
  cout << "Enter a number for multiplication: ";
  cin >> number_1;
  cout << "Enter second number for multiplication: ";
  cin >> number_2;
  product=number_1*number_2;
  cout <<"Product= " << product <<endl;



}