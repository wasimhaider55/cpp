#include <iostream>

using namespace std;

int main()
{
    int array1[10],array2[10];
    for(int i=0;i<10;i++)
    {
    cout<<"enter the value for index "<<i<<"  ";
    cin>>array1[i];
    array2[i] = array1[i];
    }
cout<<"( array 1)    ( array 2 )   is prented "<<endl;
      for(int i=0;i<10;i++){
    cout<< array1[i]<<"             " <<array2[i]<<endl;
      }
    return 0;
}
