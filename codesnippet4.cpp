 #include<iostream>
 using namespace std;
 int main(){
 int j=4;
    switch(j)
    {
        
        case 1:
        cout<<"case1";
        break;
        case j:       //variable name is not allowed only constants
        cout<<"case2";
        break;
        
    }
    return 0;
 }