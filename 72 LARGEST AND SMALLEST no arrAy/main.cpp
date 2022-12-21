#include <iostream>

using namespace std;

int main()
{
int array[3][2];
int smllest , largest;
for(int i=0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
        cout<<"enter the value for index "<<i<<" " <<j<<endl;
        cin>>array[i][j];
    }

}
smllest=array[0][0];
largest=array[0][0];
for(int i=0;i<3;i++)
{
   for(int j=0;j<2;j++)
   {
       if (smllest > array[i][j])
        smllest= array[i][j];
   if (largest < array[i][j])
    largest = array[i][j];
}}
cout<<"the largest number in the array is equal to "<<largest<<endl;
cout<<"the smallest number in the array is equal to "<<smllest;
    return 0;
}
