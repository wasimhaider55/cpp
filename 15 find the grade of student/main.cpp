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
    cout<<" the percentage is equal  " <<percentage<<endl;
    if (percentage >=60)
        cout<<"you have got first position ";
    else if (percentage >=50 && percentage < 60)
        cout<<" you have got second position ";
    else if (percentage >=40 && percentage < 50)
        cout<<" you have got third position ";
    else
        cout<<" you are failed ! try again ";
    return 0;
}
