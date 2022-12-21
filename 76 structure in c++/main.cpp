#include <iostream>
#include<string>
using namespace std;
struct student
{
    string name;
    int rollno;
    int age;
    char year;
};
int main()
{
student s1;
cout<<"enter the name of student "<<endl;
getline(cin,s1.name);
s1.age=20;
s1.rollno =191037;
s1.year ='F';
cout<<" the name  of student is   : "<<s1.name<<endl;
cout<<" the age of student is     : "<<s1.age<<endl;
cout<<" the roll no of student is :  "<<s1.rollno<<endl;
cout<<" the year  of student is   : "<<s1.year;
    return 0;
}
