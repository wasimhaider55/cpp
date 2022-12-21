#include <iostream>
void leapyear();
using namespace std;

int main()
{
    leapyear();
    leapyear();
    leapyear();
    leapyear();
    return 0;
}
void leapyear()
{
    int year;
    cout<<"\n enter  the value for year "<<endl;
   cin>>year;
   if (year % 4 ==0 )
cout<<"the year is leap year ";
else
    cout<<"the year is not leap year ";

}
