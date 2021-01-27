#include<iostream>
using namespace std;
int main(){
    
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=4;c++)
        {
            if(r==1||r==5)
                cout<<"*";
            else if(c==1||c==4)
                cout<<"*";
            else
                cout<<" ";
         }
         cout<<endl;

     }
      
}