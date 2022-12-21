#include <iostream>

using namespace std;

int main()
{
    int quantity;
    float per_iteam,expensis,discount=0;
    cout<<"enter the value of quantity you purchased "<<endl;
    cin>>quantity;
    cout<<"enter the value per item " <<endl;
    cin>>per_iteam;
    if (quantity > 1000)
        discount = 0.1;
    expensis = ( quantity * per_iteam) - (quantity * per_iteam * discount);
    cout<<" the total expenses after giving the discount "<<discount<<"  equal to "<<expensis;
    return 0;
}
