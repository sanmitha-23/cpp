#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    a=sizeof(int);
    b=sizeof(float);
    c=sizeof(double);
    d=sizeof(char);

    cout<<"Size of char: "<<d<<" byte\n";
    cout<<"Size of int: "<<a<<" bytes\n";
    cout<<"Size of float: "<<b<<" bytes\n";
    cout<<"Size of double: "<<c<<" bytes\n";

    return 0;
}
