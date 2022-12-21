#include <iostream>

using namespace std;

int main()
{
    int current_year,joint_year,servies,bonus;
    cout<<"enter the current year"<<endl;
    cin>>current_year;
    cout<<" enter the joint of year employ"<<endl;
    cin>>joint_year;
    servies = current_year - joint_year;
    if (servies > 3)
    {
        bonus = 2500;
        cout<<" the bonus given to employ  is equal to "<<bonus;
    }
    cout<<"\nthe serves of employ is "<<servies;
    return 0;
}
