#include <iostream>
unsigned long int factorial(int);
using namespace std;
int main()
{
   long int fact;
   int number ;
     cout<<"enter the number to calculate its fact "<<endl;
    cin>>number;
    fact = factorial(number);
cout<<"the factorial of number is equal to "<<fact;
    return 0;
}
unsigned long int factorial(int a)
{
    int f=1;

    for(int i=1;i<=a;i++)
        {
         f=f*i;
        }
    return f;
}
