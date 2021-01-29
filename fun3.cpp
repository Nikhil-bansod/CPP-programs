#include<iostream>
using namespace std;

void display(int a,int b){
    for(int i=a;i<=b;i++)
    cout<<i<<endl;
}
int main(){
    display(5,10);//fun not returning value so return type is void
    return 0;
}