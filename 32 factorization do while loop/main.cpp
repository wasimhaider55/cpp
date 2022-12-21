#include <iostream>

using namespace std;

int main()
{
   unsigned long int factorization =1;
   int  number;
    cout<<"enter any positive number to calculate it's factorization  "<<endl;
    cin>>number;
    int i=1;
    do{
        factorization = factorization * i;
        i++;
    }while(i<=number);
    cout<<"the factorization of  "<<number<<"  is equal to  "<<factorization;
    return 0;
}
