#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
int number,sum=0;
char option = 'y';
do{
    system("cls");
cout<<"enter the any number to calculate the sum of number"<<endl;
cin>>number;
for (int i=1;i<=number;i++){
    sum=sum+i;
}
cout<<"the sum of number  "<<number<<"  is equal to "<<sum<<endl;
sum=0;
cout<<"\nDo you wish to continue ! press Y for yes and N for NO "<<endl;
cin>>option;
}while(option == 'y' || option == 'Y');
    return 0;
}
