#include<iostream>
 using namespace std;


 void factorial(int a){
     int f=1;
     for(int i=1;i<=a;i++)
     f=f*i;
     cout<<"factorial is"<<f;

 }
 int main(){
    int n;
    cout<<"enter no:";
    cin>>n;
    factorial(n);//non returning value therefore return type of factorial is void!
    return 0;
 }