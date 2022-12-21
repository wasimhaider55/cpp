#include <iostream>
using namespace std;
void power();
int main()
{
 power();
 power();
    return 0;
}
void power()
{
int base, power,result=1;
    cout<<"\n enter the base"<<endl;
    cin>>base;
    cout<<"\n enter the power"<<endl;
    cin>>power;
    for ( int i =1; i<=power;i++)
    {
        result = result * base;
    }
    cout<<"  the  "<<base<<" power "<<power<<" is equal to "<<result;
}
