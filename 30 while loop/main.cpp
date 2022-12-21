#include <iostream>

using namespace std;

int main()
{
int i=1;
while(i<=5)
{
    cout<<i<<endl;
    i++;
}
cout<<"\n\n\n";
cout<<"start second program"<<endl;

int j=1;
while(j<=5)
{
    cout<<"\n 2 * "<<j<<"="<<2*j<<endl;
    j++;
}
cout<<"\n\n\n";
cout<<"\n start third program"<<endl;
int start,ending;
cout<<"enter the start value to generates it's table"<<endl;
cin>>start;
cout<<"enter the end value of table"<<endl;
cin>>ending;
int m=start;
while(m<=ending)
{
    cout<<"2 * "<<m<<"="<<2*m<<endl;
    m++;
}

    return 0;
}
