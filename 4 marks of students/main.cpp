#include <iostream>

using namespace std;

int main()
{
    float s1,s2,s3,s4,s5,total,percentage;
    cout<<" enter the marks of subject 1 "<<endl;
    cin>>s1;
    cout<<"\n enter the marks of subject 2 "<<endl;
    cin>>s2;
    cout<<"\n enter the marks of subject 3 "<<endl;
    cin>>s3;
    cout<<"\n enter the marks of subject 4 "<<endl;
    cin>>s4;
    cout<<"\n enter the marks of subject 5 "<<endl;
    cin>>s5;
    total=s1+s2+s3+s4+s5;
    percentage = total/500 *100;
    cout<<"the total marks students is equal to "<<total<<endl;
    cout<<" the percentage of students is equal to " <<percentage;
    return 0;
}
