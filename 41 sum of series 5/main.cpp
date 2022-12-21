#include <iostream>

using namespace std;

int main()
{
    /// 1+ 1/2*2 + 1/3*3 + 1/4*4 +..........
    float counter , sum =0;
    int term;
    cout <<" enter the value to calculate it's term "<<endl;
    cin>>term;
    for (counter=1;counter<=term;counter++)
    {
        sum =sum + 1/(counter*counter);
    }
    cout<<"the sum of series is equal to "<<sum;
    return 0;
}
