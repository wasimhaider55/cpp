#include <iostream>
void print_detial(struct student *);
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
print_detial(&s1);
    return 0;
}
void print_detial(student *ptr)
{
    cout<<"the name of students is     :"<<ptr->name;
     cout<<"\n the age of students is     :"<<ptr->age;
      cout<<"\n the roll no of students is :"<<ptr->rollno;
       cout<<"\n the year of students is   :"<<ptr->year;
}
