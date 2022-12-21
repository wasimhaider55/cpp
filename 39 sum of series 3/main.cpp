#include <iostream>

using namespace std;

int main()
{
  //// (1*1)+(2*2)+(3*3)+(4*4)+(5*5)+...........
  int counter;
  int sum=0;
  int term;
  cout<<"enter the value to calculate it's sum "<<endl;
  cin>>term;
  for(counter=1;counter<=term;counter++)
    {
    sum = sum + (counter*counter);
  }
  cout<<"the sum of series is equal to "<<sum;
    return 0;
}
