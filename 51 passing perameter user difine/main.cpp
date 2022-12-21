#include <iostream>
void sum (int , int);
using namespace std;

int main()
{
    int number1,number2;
    cout<<"\n enter number 1 "<<endl;
    cin>>number1;
    cout<<"enter number 2 "<<endl;
    cin>>number2;
    sum(number1,number2);
     sum(number1,number2);
      sum(number1,number2);

    return 0;
}
void sum(int a ,int b)
{

    int c;
    c=a+b;
    cout<<"the sum of two number is equal to "<<c<<endl;
}
