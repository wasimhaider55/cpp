#include <iostream>

using namespace std;

int main()
{
    int age;
    char material_status,gender;
    cout<<" enter the age of driver"<<endl;
    cin>>age;
    cout<<"enter material status of driver " <<endl;
    cin>>material_status;
    cout<<" enter the gender of driver ";
    cin>>gender;
    if (material_status == 'M') || (material_status == 'U' && gender == 'M' && age >30) || (material_status == 'U' && gender == 'F' age > 25)
        cout<<"the driver is insured ";
    else
        cout<<" the driver is not insured ";
    return 0;
}
