#include <iostream>

using namespace std;

int main()
{
int start , ending , sum=1;
cout<<"enter the  start value "<<endl;
cin>>start;
cout<<"enter the ending value "<<endl;
cin>>ending;
for (int a = start; a<ending;a++)
{
    sum = sum + a ;
}
cout<<"the sum is "<<start<<" upto "<<ending<<" is equal to "<<sum<<endl<<endl;
cout<<"start here second program \n";
for(int i=1;i<=10;i++)
{
    cout<<"2*"<<i<<"="<<2*i<<endl;
}
cout<<"\n\n\n start from here third program "<<endl;
int s,e;
cout<<"enter the start value of table "<<endl;
cin>>s;
cout<<"enter the end value of table  "<<endl;
cin>>e;
for(int i=s;i<=e;i++)
{
    cout<<"2*"<<i<<"="<<2*i<<endl;
}
    return 0;
}
