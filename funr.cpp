#include<iostream>
using namespace std;
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++)
    f=f*i;
    return f;

}
int main(){
   int n;
   cout<<"enter a no:";
   cin>>n;
   int z=factorial(n);
   cout<<"factorial is:"<<z;
   return 0;
}