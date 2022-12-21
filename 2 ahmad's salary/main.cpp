#include <iostream>

using namespace std;

int main()
{
float basic_salary,total_salary,gross_salary,medical_allowence,conveyance_allowence,house_rent,tex;
cout<<"enter the basic salary of ahmad's "<<endl;
cin>>basic_salary;
medical_allowence = basic_salary * 0.4;
conveyance_allowence = basic_salary * 0.15;
house_rent = basic_salary * 0.2;
gross_salary = basic_salary+  medical_allowence + conveyance_allowence + house_rent;
tex = gross_salary * 0.1;
cout<<" the gross salary is equal to "<<gross_salary<<endl;
total_salary = gross_salary - tex;
cout<<"the total salary of ahmads is equal to "<<total_salary;

    return 0;
}
