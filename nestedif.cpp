#include<iostream>
using namespace std;
int main()
{ 
  int savings;
  cout<<"enter savings: ";
  cin>>savings;
  if(savings>5000)
     {
       cout<<"go with shraddha"<<endl;
       
         if(savings>10000)
         cout<<"go for road trip"<<endl;
         else
         cout<<"go for shopping";
     }
  else if(savings>2000)
  cout<<"go with prangal";
  else
  cout<<"go with friends";

 return 0;
}
