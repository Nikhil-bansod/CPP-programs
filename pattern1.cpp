#include<iostream>
using namespace std;
int main(){

 int row,col;
 cout<<"enter row and column:";
 cin>>row>>col;

 for(int r=1;r<=row;r++){
    for(int c=1;c<=col;c++)
        cout<<"*";
    cout<<endl;
 }
 return 0;
    
}
