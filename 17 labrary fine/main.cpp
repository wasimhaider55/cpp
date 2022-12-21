#include <iostream>

using namespace std;

int main()
{
    int day,fine;
    cout<<" enter the value for days that member  return a book late "<<endl;
    cin>>day;
    if (day <=5)
    {
        fine = day * 5;
        cout<<" the total fine is  due "<<fine<<endl;
    }
    else if (day >=6 && day <=10)
    {
         fine = day * 10;
        cout<<" the total fine is  due "<<fine<<endl;

    }
    else if (day >10 && day <=30)
    {
         fine = day * 20;
        cout<<" the total fine is  due "<<fine<<endl;
    }
    else
    {
        fine = day * 20;
        cout<<"\n the total fine is due "<<fine<<endl;
        cout<<"the member ship is canceled due to late return a book after 30 day";
    }
    return 0;
}
