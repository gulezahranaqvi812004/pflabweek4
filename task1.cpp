#include <iostream>
using namespace std;

void add(int number_1,int number_2); 
void product(int number_1,int number_2); 
void subtract(int number_1,int number_2);
void division(int number_1,int number_2);  
main()
{
     int number_1;
     int number_2;
     char operation;
     while (true)
     {   
         cout << "Enter a number: ";
         cin  >> number_1;
         cout << "Enter second number: ";
         cin  >> number_2;
         cout << "Enter operation(*,/,+,_): ";
         cin  >> operation;
     if(operation=='+')
        {
         add(number_1,number_2); 
        }
     if(operation=='-')
        {
         subtract(number_1,number_2); 
        }
     if(operation=='*')
        {
         product(number_1,number_2);       
        }
     if(operation=='/')
        {
         division(number_1,number_2);       
        }
     }
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

void subtract(int number_1,int number_2)
{
     int subtract; 
     subtract=number_1-number_2;
     cout << "Subtract: " << subtract<< endl;
}
void division(int number_1,int number_2)
{
     int division; 
     division=number_1/number_2;
     cout << "Division: " <<division<< endl;
}