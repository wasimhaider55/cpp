#include <iostream>
int sum();
using namespace std;

int main()
{
    int kilogram;
    kilogram = sum();
    cout<<"the kilogram into gram  is equal to "<<kilogram;
    return 0;
}
int sum()
{
    int result, kilogram;
    cout<<"Enter the value kilogram into gram "<<endl;
    cin>>kilogram;
    result = kilogram*1000;
    return result;
}
