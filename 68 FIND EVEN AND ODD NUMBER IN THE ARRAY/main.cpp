#include <iostream>
using namespace std;
int main()
{
int array[10];
int even=0 ,odd=0;
for (int i=0;i<10;i++)
{
    cout<<"enter the value for index "<<i<<"  ";
    cin>>array[i];
    if (array[i] % 2 == 0)
    even++;
    else
        odd++;
}
    cout<<"the even number in the array is equal to "<<even<<endl;
    cout<<"the odd number in the array is equal to "<<odd<<endl;
    return 0;
}
