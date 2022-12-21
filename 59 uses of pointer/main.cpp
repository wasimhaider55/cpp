#include <iostream>

using namespace std;

int main()
{
    int number;
    int *p;
    p=&number;
    number=50;
    cout<<"the value of number is equal to "<<number<<endl;
    cout<<"the value of number is equal to "<<*p;
     cout<<"\n the memory address of variable is equal to &number "<<&number;
    cout<<"\n the memory address of variable is equal to  P "<<p;
    number= 110;
    cout<<"\n the value of number is equal to "<<number<<endl;
    cout<<"the value of number is equal to "<<*p;
    *p=40;
    cout<<"\n the value of number is equal to "<<number<<endl;
    cout<<"the value of number is equal to "<<*p<<endl;
    number = number * number;
     cout<<"\n the value of number * number  is equal to "<<number<<endl;
     *p = number + 5000;
     cout<<"the value of number is equal to "<<*p;
    return 0;
}
