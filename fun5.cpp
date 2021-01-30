#include<iostream>
using namespace std;
void sum(int);
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    sum(n);
    return 0;
}
void sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s=s+i;//s=s+1/i;s=s+i*i;
    }
    cout<<"sum is"<<s;
}