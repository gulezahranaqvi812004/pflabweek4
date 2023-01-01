#include <iostream>
using namespace std;
void show_result(int marks);
main()
  {
      int marks;
      while(true)
      {
        cout << "Enter your marks: ";
        cin >> marks;
        show_result (marks);
      }
       
    
  }
void show_result(int marks)
  {
    if (marks>50)
    {
       cout << "Pass" << endl;
    }
    if (marks<50)
    {
       cout << "Fail "<<endl;
    }
    if (marks==50)
    {
       cout << "Need more hardwork" <<endl;
    }

}
