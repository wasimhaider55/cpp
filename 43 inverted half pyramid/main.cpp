#include <iostream>

using namespace std;

int main()
{
 int i,j,row;
 cout<<"enter the value for patron "<<endl;
 cin>>row;
 for (i=row;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
 }


 int k,l;
 for (k=1;k<=10;k++){
    for(l=1;l<=k;l++){
        cout<<"*";
    }
    cout<<endl;
 }
    return 0;
}
