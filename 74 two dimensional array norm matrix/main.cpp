#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int array[3][2];
int sum =0;
float result=0;
for(int i=0;i<3;i++)
{
    for (int j=0;j<2;j++)
    {
        cout<<"enter the value index number "<<i<<" "<<j<<"  : ";
        cin>>array[i][j];
        sum = sum + pow(array[i][j],2);
    }
    result = sqrt (sum);
}
cout<<"the result of norm of a matrix is equal to "<<result;
    return 0;
}
