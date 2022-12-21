#include <iostream>
void calculatepower(int&,int&,int&);
using namespace std;

int main()
{
    int b,p,res=1;
    cout<<"enter the base of number"<<endl;
    cin>>b;
    cout<<"enter the power of number"<<endl;
    cin>>p;
    calculatepower(b,p,res);
    cout<<b<<" power "<< p <<" is equal to "<<res;
    return 0;
}
void calculatepower(int&base,int&power,int&result)
{
    for(int i=1;i<=power;i++)
    {
        result=result*base;
    }
}
