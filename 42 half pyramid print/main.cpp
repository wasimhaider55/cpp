#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int rows;
    cout<<"enter the number of rows to calculate its patron"<<endl;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
