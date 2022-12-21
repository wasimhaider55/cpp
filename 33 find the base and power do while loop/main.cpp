#include <iostream>

using namespace std;

int main()
{
int base , power;
cout<<"enter the value for base "<<endl;
cin>>base;
cout<<"enter the value for power "<<endl;
cin>>power;
int i=1;
int result=1;
do{
 result = result * base;
 i++;
}while(i<=power);
cout<<endl<<endl;
 cout<<base<<"  base  "<<power<<" is equal to "<<result;
    return 0;
}
