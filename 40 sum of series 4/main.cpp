#include <iostream>

using namespace std;

int main()
{
    /// (1*2*3)+(2*3*4)+(3*4*5)+..........
    int counter;
    int sum =0;
    int term;
    cout<<"enter the value to calculate it's sum of series "<<endl;
    cin>>term;
    for(counter=1;counter<=term;counter++)
    {
      sum = sum + (counter *  (counter +1)* (counter+2));
    }
    cout<<"the sum of series is equal to "<<sum;
    return 0;
}
