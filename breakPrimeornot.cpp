#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a  no";
    cin>>n;
    for(int i=2;i<n;i++)//  n-1
    {
      if(n%i==0) 
      {
        cout<<"not prime";
        break;
      }
    }
    
cout<<"is prime";
}