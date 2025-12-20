#include<iostream>
using namespace std;
 int main()
 {
  int a,b;
  char c;
 int sum,diff,mul;
 float div;


 cout<<"Enter a equation (ex.a-b):"<<endl;
 cin>>a>>c>>b;

 if(c == '+')
 {      sum=a+b;
     cout<<"Sum="<<sum<<endl;
 }
  else if(c == '-')
  { diff=a-b;
      cout<<"Difference="<<diff<<endl;
  }
 else if(c == '*')
 {  mul=a*b;
     cout<<"Multipication="<<mul<<endl;
 }

 else if(c == '/')
{  div=(float)a/b;
    cout<<"Division="<<div<<endl;
}


return 0;


 }
