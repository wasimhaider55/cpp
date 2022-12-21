#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int array[3];
int sum=0;
float  result=0;
for(int i=0;i<3;i++)
{
    cout<<"enter the value of index "<<i<<"  ";
    cin>>array[i];
   sum=sum + pow(array[i] , 2);
}
result = sqrt (sum);
cout<<"the square root of number is equal to "<<result;
    return 0;
}
