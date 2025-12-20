#include<iostream>
using namespace std;
int main()
{
  float marks1,marks2,marks3,sum,avg;
  cout<<"ENTER THE MARKS1:"<<endl;
  cin>>marks1;
  cout<<"ENTER THE MARKS2:"<<endl;
  cin>>marks2;
  cout<<"ENTER THE MARKS3:"<<endl;
  cin>>marks3;

   sum=marks1+marks2+marks3;
  avg=(float)sum/3;
  cout<<"The total marks:"<<avg<<endl;

  if(avg>=80 && avg<=100)
  {
      cout<<"GOOD performance"<<endl;
  }
 else if(avg>=70 && avg<=79)
     {
         cout<<"Moderate performance"<<endl;
     }
else if(avg>=50 && avg<=69)
     {
         cout<<"cold performance"<<endl;
     }
        if(avg<50)
      {
          cout<<"tumi fail,valo kore poro masud"<<endl;
      }
    return 0;












}
