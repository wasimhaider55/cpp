#include <iostream>

using namespace std;

int main()
{
    int i=1;
 do{
    cout<<"welcome to c++ programming "<<endl;
    i++;
 }while(i<=5);
 cout<<endl<<endl;
 int h=1;
 do{
        cout<<h<<endl;
        h++;

 }while(h<=10);
 cout<<endl<<endl<<endl;
 cout<<"find the even number in do while loop"<<endl;
 int E=0;
 do{
    cout<<E<<endl;
    E=E+2;
 }while(E<=20);

 cout<<endl<<endl<<endl;
 cout<<"display the table of 2"<<endl;
 int t=1;
 do{
    cout<<"2 * " << t<<" = "<<2*t<<endl;
    t++;
 }while(t<=14);




 cout<<endl<<endl<<endl<<endl;
 cout<<"find the sum of 1 to 100 "<<endl<<endl;

 int s=1,sum=1;
 do{
    sum=sum+s;
    s++;
 }while(s<=100);
 cout<<"the sum 0 to 100 is equal to "<<sum;
    return 0;
}
