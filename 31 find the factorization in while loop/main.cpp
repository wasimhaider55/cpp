#include <iostream>

using namespace std;

int main()
{
    int number , result=1;
    cout<<"enter the number to calculate it's factorization "<<endl;
    cin>>number;
    int i=1;
    while (i<=number)
    {
        result = result * i;
        i++;

    }
     cout<<"the factorization of "<<number<<"is equal to "<<result;
    return 0;
}
