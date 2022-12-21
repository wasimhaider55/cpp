#include <iostream>
void area_perameter(int , int ,int*, int*);
using namespace std;

int main()
{
int length,breath,area,perameter;
cout<<"enter length"<<endl;
cin>>length;
cout<<"enter breath"<<endl;
cin>>breath;
area_perameter(length,breath,&area,&perameter);
cout<<"\n the area of rectangle is equal to "<<area;
cout<<"\n the perameter of rectangle is equal to "<<perameter;
    return 0;
}
void area_perameter(int l ,int b  ,int *ar ,int *pr )
{
    *ar= l*b;
    *pr = (2 * l) + (2 * b) ;
}
