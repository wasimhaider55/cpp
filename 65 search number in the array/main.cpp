#include <iostream>

using namespace std;

int main()
{
    int arry[10];
    int search;
    int time=0 ;
    for (int i = 0;i<10;i++)
    {
        cout<<"enter the number from index "<<i<<"  ";
        cin>>arry[i];
    }
    cout<<"enter the number to search to "<<endl;
    cin>>search;
    for (int i = 0;i<10;i++){
    if (search == arry[i])
    {
        time++;
    }
    }
if (time > 0){
      cout<<"the number is present "<< time <<"time of the array";
}
else
    cout<<"the number your entered was not present in the array";
    return 0;
}
