#include <iostream>

using namespace std;

int main()
{
    int number;
    int& refnumber = number;
    number = 120;
    cout<<"the value stored in number variable is equal to "<<number<<endl;
    cout<<"the value stored in number variable is equal to "<<refnumber<<endl;
    number = 30;
    cout<<"the value stored in number variable is equal to "<<number<<endl;
    cout<<"the value stored in number variable is equal to "<<refnumber<<endl;
    cout<<"the value stored in number variable square  is equal to "<<number*number<<endl;
    cout<<"the value stored in number variable square is equal to "<<refnumber*number<<endl;

    return 0;
}
