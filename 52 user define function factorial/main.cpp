#include <iostream>
void calculatefact(int);
using namespace std;

int main()
{
    int number;
    cout<<"enter the value to calculate it's factorial "<<endl;
    cin>>number;
    calculatefact(number);
    return 0;
}
void calculatefact(int number)
{
    int fact =1;
    for (int i=1;i<=number;i++){
    fact = fact * i;}
    cout<<"the fact of number is equal to "<<fact;
}
