#include <iostream>

using namespace std;

int main()
{
float km,meter,feet,inches;
cout<<"enter the distance of two cites "<<endl;
cin>>km;
meter=km*1000;
feet=km*3280.84;
inches=km*39370.1;
cout<<"the distance between of two cities of in meter is equal to "<<meter<<endl;
cout<<"the distance between of two cities of in feet is equal to "<<feet<<endl;
cout<<"the distance between of two cities of in inches is equal to "<<inches<<endl;
    return 0;
}
