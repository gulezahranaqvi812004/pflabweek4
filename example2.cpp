#include <iostream>
using namespace std;

void add(int number_1,int number_2); 
void product(int number_1,int number_2); 
main()
{
  int number_1;
  int number_2;
  cout << "Enter a number: ";
  cin >> number_1;
  cout << "Enter second number: ";
  cin >> number_2;
  add(number_1,number_2); 
  product(number_1,number_2); 
}

void add(int number_1,int number_2)
{
  int sum;
  sum=number_1+number_2;
  cout << "Sum: "<<sum <<endl;

}
void product(int number_1,int number_2) 
{
  int product; 
  product=number_1*number_2;
  cout << "product: " << product << endl;




}