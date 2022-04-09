#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Please enter your age:\n";
    cin>>age;

    if(age>=18)
        cout<<"Eligible to vote.\n";
    else
        cout<<"Ineligible to vote.\n";

    return 0;
}
