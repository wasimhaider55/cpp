#include <iostream>
int sum(int , int);
using namespace std;
int main()
{
int num1,num2,ans;
cout<<"enter num1"<<endl;
cin>>num1;
cout<<"enter num2"<<endl;
cin>>num2;
ans = sum(num1,num2);
cout<<"the sum of two number is equal to "<<ans;
}
int sum(int a , int b)
{
    int result; 
result	= a + b;
return result;
}
