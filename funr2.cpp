#include<iostream>
using namespace std;

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    int a,b;
    cin>>a>>b;
    int z=max(a,b);
    cout<<"max no is:"<<z;
    return 0;   
}