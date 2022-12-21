#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"enter the number your own choice form 1 to 999"<<endl;
    cin>>number;
    if (number > 0){
        cout<<" the number you entered is positive "<<endl;
         if (number< 10)
            cout<<" the number is less than 10 it was a single digits "<<endl;
         else if (number<100)
            cout<<" the number is less than 100 it was a double digits "<<endl;
         else
         cout<<"the number is less than 1000 it was a thripal digits "<<endl;
    }
    else if (number==0)
        cout<<"the number is equal to zero "<<endl;
    else
        cout<<" the number is less than zero mean negative ";

    return 0;
}
