#include <iostream>

using namespace std;

int main()
{
    int i,j,rows,space;
    cout<<"enter the value for rows of series"<<endl;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
     for(space=1;space<=rows;space++)
     {
         cout<<"  " ;
     }
     for(j=1;j<=(2*i-1);j++){
        cout<<"*";
     }
     cout<<endl;
    }
    return 0;
}
