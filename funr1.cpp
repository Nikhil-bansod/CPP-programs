#include<iostream>
using namespace std;
float mean(int,int,int);
int main(){
    int a,b,c;
    cout<<"enter 3 no:";
    cin>>a>>b>>c;
    int z=mean(a,b,c);
    cout<<"mean is:"<<z;
    return 0;
}

float mean(int a,int b,int c){
    float m=(a+b+c)/(float)3;
    return m;
}