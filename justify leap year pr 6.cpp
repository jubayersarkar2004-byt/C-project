#include<iostream>
using namespace std;
int main()
{
 int year;
 cout<<"ENTER A YEAR TO JUSTIFY LEAP YEAR:"<<endl;
 cin>>year;
 if((year%4==0 && year%100!=0)|| year%400==0)

 {
     cout<<"it's a leap year"<<endl;
 }

   else{
    cout<<"it's not a leap year"<<endl;
   }

    return 0;





}
