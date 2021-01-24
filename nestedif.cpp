#include<iostream>
using namespace std;
int main()
{   int a,b,c,d,T,P;
cout<<"enter marks of 4 sub";
cin>>a>>b>>c>>d;
T=a+b+c+d;
cout<<"T is="<<T<<endl;
P=T*100/400;
cout<<"Precentage is:"<<P;
if(a>=45 && b>=45 && c>=45 && d>=45)
 cout<<"student is pass"<<endl;
   if(P>=60)
   cout<<"First class";
else
 cout<<"s is fail";   
return 0;
}