#include <iostream>

using namespace std;

int main()
{
    int hardness, tensile_strenght;
    float carbon_content;
    cout<<" enter the value for hardness steal"<<endl;
    cin>>hardness;

     cout<<"enter the value for carbon content of steal "<<endl;
    cin>>carbon_content;

    cout<<"enter the value for tensile strength steal "<<endl;
    cin>>tensile_strenght;


    if (hardness > 50 && carbon_content < 0.7 && tensile_strenght >5600)
        cout<<"the grade of your steal is 10 ";
    else if (hardness > 50 && carbon_content < 0.7)
         cout<<"the grade of your steal is 9 ";
    else if (carbon_content > 0.7 && tensile_strenght > 5600)
         cout<<"the grade of your steal is 8 ";
    else if (hardness > 50 && tensile_strenght > 5600)
         cout<<"the grade of your steal is 7 ";
    else if (hardness > 50 || carbon_content < 0.7 || tensile_strenght >5600)
        cout<<"the grade of your steal is 6";
    else
        cout<<"the grade of your steal is 5 ";
    return 0;
}
