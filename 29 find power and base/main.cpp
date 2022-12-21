#include <iostream>

using namespace std;

int main()
{
int power,base,result=1; /////// base =125 power = 3 result = 3
cout<<"enter the value for base to calculate's it power"<<endl;
cin>>base;
cout<<"enter the value for power"<<endl;
cin>>power;
for (int i=1;i<=power;i++)
{
    result=result*base;
}
cout<<base<<"power"<<power<<"equal to "<<result;

    return 0;
}
