#include <iostream>
void swipvalue(int&,int&);
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter the value for number one "<<endl;
    cin>>num1;
    cout<<"enter the value for number two "<<endl;
    cin>>num2;
    cout<<"the value of number one variable before the swapping "<<num1<<endl;
    cout<<"the value of number one variable before the swapping "<<num2<<endl;
    swipvalue(num1,num2);
    cout<<"the value of number one variable after the swapping "<<num1<<endl;
    cout<<"the value of number one variable after the swapping "<<num2<<endl;
    return 0;
}
void swipvalue(int& a, int& b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
