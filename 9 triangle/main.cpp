#include <iostream>

using namespace std;

int main()
{
    int angle1,angle2,angle3,sum;
    cout<<"enter the value for first angle "<<endl;
    cin>>angle1;
     cout<<"enter the value for second angle "<<endl;
    cin>>angle2;
     cout<<"enter the value for third  angle "<<endl;
    cin>>angle3;
    sum=angle1+angle2+angle3;
    if ( sum ==180)
        cout<<"the triangle is valid"<<endl;
    else
        cout<<" the triangle is invalid";

    return 0;
}
