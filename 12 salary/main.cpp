#include <iostream>

using namespace std;

int main()
{
    int salary,hr,da,gross_salary;
    cout<<" enter the basic salary of employ "<<endl;
    cin>>salary;
    if (salary < 1500)
    {
        hr =  0.1 * salary;
        da = 0.9 *  salary;
        gross_salary = salary + hr + da;
    }
    else
    {
        hr = 500 ;
        da = 0.98*  salary ;
        gross_salary = salary + hr + da;
    }
    cout<<" the gross salary of employ which is equal to "<<gross_salary;
    return 0;
}
