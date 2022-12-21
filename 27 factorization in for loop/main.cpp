#include <iostream>
using namespace std;

int main()
{
unsigned long int fact=1;
int number;
cout<<"enter a number for factorization"<<endl;
cin>>number;
for (int j=1;j<=number;j++)
{
    fact=fact*j;
}
cout<<"the number of factorization is equal to "<<fact;
    return 0;
}
