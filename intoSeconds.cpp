#include<iostream>
using namespace std;

class time
{
    int HH,MM,SS;

public:
    void input()
    {
        cout<<"Enter hours:"<<endl;
        cin>>HH;
        cout<<"Enter minutes:"<<endl;
        cin>>MM;
        cout<<"Enter seconds:"<<endl;
        cin>>SS;
        cout<<"The time entered is - "<<HH<<":"<<MM<<":"<<SS<<endl;
    }
    int toSeconds()
    {
        return ((3600*HH)+(60*MM)+SS);
    }
};

int main()
{
    time t;
    t.input();
    cout<<"The time in HH:MM:SS form converted to seconds is: "<<t.toSeconds()<<" s"<<endl;

    return 0;
}
