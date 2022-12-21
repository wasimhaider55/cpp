#include <iostream>
int factorial (int );
using namespace std;

int main()
{
    int numberl,result=1;
    cout<<"enter the positive value to count it's factorial "<<endl;
    cin>>numberl;
      result =  factorial(numberl);
 cout<<"the factorial of "<<numberl<<" is equal to "<<result;
    return 0;
}
int factorial(int n)
{
    if (n > 1)
        return n *factorial(n-1);
        else
        return 1;

}
