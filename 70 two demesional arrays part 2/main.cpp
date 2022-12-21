#include <iostream>

using namespace std;

int main()
{
int array[3][2];
int i;
for(i=0;i<3;i++)
{
    for (int j=0;j<2;j++)
    {
         cout<<"enter the value for index "<<i<<"  "<< j;
    cin>>array[i][j];
    }
}
  for(i=0;i<3;i++)
  {
      for(int j=0;j<2;j++)
      {
          cout<<" the index is equal to "<<array[i][j]<<endl;
      }
  }
    return 0;
}
