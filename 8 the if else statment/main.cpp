#include <iostream>
using namespace std;
int main()
{
    int cost_price,sell_price,profit;
    cout<<"enter the value for cost_price item "<<endl;
    cin>>cost_price;
    cout<<"enter the value for sell_price item "<<endl;
    cin>>sell_price;
    if (cost_price > sell_price)
    {
        cout<<" you have incurred loss "<<endl;
        profit = cost_price - sell_price;
        cout<<"you have loss the incurred loss is " << profit;
    }
    else
    {
        cout<<" you have earned profit "<<endl;
        profit = sell_price - cost_price;
        cout<<" you have earned profit is equal to "<<profit;
    }
    return 0;
}
