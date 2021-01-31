#include<iostream>
using namespace std;
void demo(){
    auto  a=5; //but in decleration is auto int a=5;
    cout<<a;
    a++;
}
int main(){
    demo();
    demo();
    demo();
    return 0;
}
