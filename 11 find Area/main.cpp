#include <iostream>

using namespace std;

int main()
{
    int length,breath,Area,perameter;
    cout<<"enter the length of area"<<endl;
    cin>>length;
    cout<<"enter the breath of area"<<endl;
    cin>>breath;
    Area= length * breath;
    perameter = (2 * breath) + (2 * length);
    if (Area > perameter)
        cout<<" the area of rectangle which is "<<Area<<"is grater than perameter"<<perameter;
    else
        cout<<" the area of rectangle which is "<<Area<<"is less than parameter"<<perameter;
    return 0;
}
