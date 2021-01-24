#include<iostream>
using namespace std;
int main()
{   int x=3;
    float  y=3.0;
    
     if(x==y)                  
//In the case of numbers, anyway, the equality operator == does not mean "Are these two things identical in every way?" What it means is, "Do these two things have the same value?"

//The integer 3 and the floating-point number 3.0 clearly have the same value, so if(3 == 3.0) is true.

//Similarly, on an ASCII machine, the value of the 'A' character is 65, so if('A' == 65) is true, even though the letter A and the number 65 might look like very different things at first.

     cout<<"equal"<<endl;//
     else//
     cout<<"not equal"<<endl;
return 0;
}