#include <iostream>
void sum(int,int,int*);
using namespace std;

int main()
{
int num1,num2,res;
cout<<"enter num 1"<<endl;
cin>>num1;
cout<<"enter num 2 "<<endl;
cin>>num2;
sum(num1,num2,&res);
cout<<"the sum of two number is equal to "<<res;
    return 0;
}
void sum(int a,int b,int *t)
{
    *t=a+b;
}

