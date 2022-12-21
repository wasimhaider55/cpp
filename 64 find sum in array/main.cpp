#include <iostream>

using namespace std;

int main()
{
int arry[10], sum=0;
for(int i = 0; i<10;i++)
{
    cout<<"enter the value index of "<<i<<"  ";
    cin>>arry[i];
    cout<<endl;
    sum=sum+arry[i];
}
cout<<"the sum of 10 is equal to "<<sum;

    return 0;
}
