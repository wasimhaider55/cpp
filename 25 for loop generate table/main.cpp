#include <iostream>

using namespace std;

int main()
{
int number,start,ending;/// number 5 start 5 end 10
cout<<"enter the value to generate it's table "<<endl;
cin>>number;
cout<<"enter the start "<<endl;
cin>>start;
cout<<"enter the ending value "<<endl;
cin>>ending;
for(int i=start;i<=ending;i++)
{
    cout<<number<<"*"<<i<<"="<<number*i<<endl;
}
    return 0;
}
