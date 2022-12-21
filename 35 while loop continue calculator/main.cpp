#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
 int number1,number2;
 char choice = 'y';
 int i=1;
while (choice == 'Y'  || choice == 'y')
{
    system("cls");
 cout<<"enter the value for first number " <<endl;
 cin>>number1;
 cout<<"enter the value for second number "<<endl;
 cin>>number2;
 cout<<"the addition of two number is equal to "<<number1+number2<<endl;
 cout<<"the subtraction of two number is equal to "<<number1-number2<<endl;
 cout<<"the product  of two number is equal to "<<number1*number2<<endl;
 cout<<"the division  of two number is equal to "<<number1/number2<<endl<<endl;
 cout<<"do you wish to continue ! Press Y for yes N for no ";
 cin>>choice;
}
cout<<"\n \n \n the program will terminate  now..............."<<endl;
    return 0;
}
