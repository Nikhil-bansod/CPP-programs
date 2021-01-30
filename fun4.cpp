#include<iostream>
using namespace std;

void volume(int a,int b,int h){
    int v=a*b*h;
    cout<<"volume is"<<v;
}
int main(){
    int v;
    int l,b,h;
    cout<<"enter parameters:";
    cin>>l>>b>>h;
    volume(l,b,h);
    cout<<"volume is"<<v;//gb of v
    return 0;
}