#include <iostream>

using namespace std;

int main()
{
    int number1,number2,result;
    int choice;
    cout<<"enter the value for number one "<<endl;
    cin>>number1;
    cout<<"enter the value for number two "<<endl;
    cin>>number2;


    cout<<"1 ... ........ press 1 for addition "<<endl;
    cout<<"2 ............ press 2 for subtraction "<<endl;
    cout<<"3 ..... .....  press 3 for multiplication "<<endl;
    cout<<"4 .. ......... press 4 for division "<<endl;
    cout<<"5 ............ press 5 for remainder "<<endl;
    cin>>choice;
        switch(choice)
        {
        case 1 :
            result = number1+number2;
            cout<<" the addition of two number is equal to "<<result;
            break;
        case 2 :
            result = number1-number2;
            cout<<" the subtraction of two number is equal to "<<result;
            break;
        case 3 :
            result = number1*number2;
            cout<<" the product of two number is equal to "<<result;
            break;
        case 4 :
            result = number1/number2;
            cout<<" the division of two number is equal to "<<result;
            break;
        case 5 :
            result = number1%number2;
            cout<<" the remainder  of two number is equal to "<<result;
            break;
             default:
                cout<<"you have enter invalid number please try again ";
        }
        cout<<"\n i am the outside of body the switch statement case ";
    return 0;
}
