#include<iostream>  
using namespace std;
  int main ()  
    {  
        int i;  
        for(i = 0; i<10; i++)  
        {  
            cout<<i;
            if(i == 10)  
            break;  
        }  
        cout<<"came outside loop  "<<i;
          
    }  
    