#include <iostream>

using namespace std;

int main()
{
    int number ,zero=0,negative=0,positive=0;
char choice = 'y';
while(choice == 'Y' || choice == 'y')
{
    cout<<"enter the any integer number from  keyboard"<<endl;
    cin>>number;
    if (number>0)
        positive++;
    else if (number < 0 )
    negative++;
    else
        zero++;
    cout<<"do you wish to continue ! press y for yes and N for no ";
    cin>>choice;
}
    cout<<"the number of positive number is equal to "<<positive<<endl;
    cout<<"the number of negative number is equal to " <<negative<<endl;
    cout<<"the number of zero  is equal to " <<zero;
    return 0;
}
