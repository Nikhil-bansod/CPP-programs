#include<iostream>
using namespace std;
int main(){
    int j=1;
    switch(j)
    {
        cout<<"hello!"<<endl;//will not executed
        case 1:
        cout<<"case1";
        break;
        case 2:
        cout<<"case2";
        break;
        
    }
    return 0;
}