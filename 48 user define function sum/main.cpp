#include <iostream>
void sum();//// user defined function declared
using namespace std;

int main()
{
    sum();  //// calling user defined function

    return 0;
}
void sum() /////// definition of user defined function
{
    int num1,num2;
    num1=14;
    num2=13;
    cout<<"the sum of two number is equal to "<<num1+num2;
}
