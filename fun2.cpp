#include<iostream>
using namespace std;
void even();//prototype
int main(){
    even();
    return 0;
}
void even()
{
    for(int i=1;i<=100;i++)
    if(i%2==0)
    cout<<i<<endl;

}