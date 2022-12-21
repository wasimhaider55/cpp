#include <iostream>

using namespace std;

int main()
{
char gender,qualification;
int service,salary;
cout<<" enter the value for gender ( M for male F for female ) "<<endl;
cin>>gender;
cout<<"enter the value qualification ( P for post graduate  and G fir graduate ) ";
cin>>qualification;
cout<<" enter the value for employ serviced "<<endl;
cin>>service;
if (gender == 'M' && qualification == 'p'&& service >= 10)

    salary = 15000;
else if (( gender == 'M' && qualification == 'P'  && service >= 10)  || (gender == 'M' && qualification == 'P' && service >10))
    salary = 10000;
else if ( gender == 'M'     && qualification == 'G' && service <10)
    salary=7000;
    else if (gender == 'F' && qualification == 'P' && service >= 10)
        salary=12000;
    else if (gender == 'F' && qualification == 'G' && service >=10)
        salary = 9000;
    else if (gender == 'F' && qualification == 'P'  && service <10)
        salary=10000;
    else if (gender == 'F' && qualification == 'G'  && service <10)
    salary=6000;
    cout<<" the salary according to rule is equal to "<<salary;
    return 0;
}
