#include<iostream>
using namespace std;
int main()
{
    int x=10,y=5;
    switch(x>y && x+y>0)
    {
        case 1:
        cout<<"hi"<<endl;
        
        case 0:
        cout<<"bye"<<endl;
    
        default:
        cout<<"hello";
    }
}
