#include <iostream>

using namespace std;

int main()
{
    int power , base,result = 1;
    char option ='y';
    while(option == 'Y' || option == 'y')
    {
    cout<<"enter the value of base "<<endl;
    cin>>base;
    cout<<"enter  the  value of power "<<endl;
    cin>>power;
    for (int i=1;i<=power;i++)
    {
    result=result*base;
    }
    cout<<base<<" power  "<<power<<"  is equal to "<<result<<endl;
    result=1;
    cout<<"Do you wish to continue ! press y for yes and N for no "<<endl;
    cin>>option;
    }
    return 0;
}
