#include <iostream>

using namespace std;

int main()
{
int array[3][2];
int sum=0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
        cout<<"enter the value for index "<<i<<" " <<j<<endl;
        cin>>array[i][j];
        sum = sum + array[i][j];
    }
}
    cout<<"the sum Array  is equal to "<<sum;

    return 0;
}
