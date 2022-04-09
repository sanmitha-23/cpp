#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;

    int a[n],i,*p;
    cout<<"Enter the array elements:\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    p=a;
    cout<<"The array elements are:\n";
    for(i=0;i<n;i++)
    {
        cout<<*p<<"  ";
        p++;
    }

    return 0;
}
