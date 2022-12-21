#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int number1,number2;
    char choice;
   do{
    system("cls");
    cout<<"enter the value for number 1 "<<endl;
    cin>>number1;
    cout<<"enter the value for number 2 "<<endl;
    cin>>number2;



    cout<<"the sum of two number is equal to "<<number1+number2<<endl;
    cout<<"the subtraction of two number is equal to "<<number1-number2<<endl;
    cout<<"the multiplication  of two number is equal to "<<number1*number2<<endl;
    cout<<"the division  of two number is equal to "<<number1/number2<<endl;
    cout<<"the remainder  of two number is equal to "<<number1%number2<<endl;
    cout<<"do you wish to continue ! press y for yes and n for no"<<endl;
    cin>>choice;
    }while(choice == 'Y' || choice == 'y');
    cout<<"the program will terminate now...........";

    return 0;
}
