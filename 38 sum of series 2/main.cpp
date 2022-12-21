#include <iostream>

using namespace std;

int main()
{
    /// 1/1! + 1/2! + 1/3! + 1/4!+ -----------
    float counter,sum=0;
    int term;
    float factorial =1;
    cout<<"enter the value to create it's series "<<endl;
    cin>>term;
    for(counter=1;counter<=term;counter++)
        {
            factorial = factorial * counter;
        sum=sum + (1/factorial);
        }
        cout<<"the sum series of is equal to "<<sum;
    return 0;
}
