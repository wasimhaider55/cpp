#include <iostream>

using namespace std;

int main()
{
// make a calculator
int number1,number2,result;
char operation;
cout<<"enter the value for number one "<<endl;
cin>>number1;
cout<<"enter the value for number two " <<endl;
cin>>number2;
cout<<"enter the symbol to operator ( +,-,*,/,% ) ";
cin>>operation;
if (operation == '+')
{
result=number1+number2;
cout<<" the addition of two number is equal to "<<result<<endl;
}
else if ( operation=='-')
{
    result=number1-number1;
cout<<"the subtraction of two number is equal to "<<result<<endl;
}
else if ( operation=='*')
{
    result=number1*number1;
cout<<"the product of two number is equal to "<<result<<endl;
}
else if ( operation=='/')
{
    result=number1/number1;
cout<<"the division of two number is equal to "<<result<<endl;
}
else if (operation=='%')
    {
       result= number1%number2;
        cout<<" the modules of two number is equal to "<<result;
}
else
    cout<<"you have entered invalid number : the program will terminate now";
    return 0;
}
