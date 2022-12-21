#include <iostream>
using namespace std;
int main()
{
int array [10];
int pos=0,neg=0,even=0,odd=0;
for(int i=0;i<10;i++)
    {
    cout<<"enter the value of the index "<<i<<"  ";
    cin>>array[i];
    if (array[i]>=0)
        {
        pos++;
    if (array[i]%2==0)
        even++;
    else
        odd++;
    }
    if (array[i] < 0)
       {
        neg++;
    if (array[i]%2==0)
        even++;
    else
        odd++;
    }
    }
    cout<<"positive number is : "<<pos<<endl;
    cout<<"negative number is : "<<neg<<endl;
    cout<<"Even  number is    : "<<even<<endl;
    cout<<"Odd   number is    : "<<odd<<endl;

    return 0;
}
