//Input a year and check whether it is a leap year.
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

int year;

cout<<"Enter a year to justify a leap year:";
cin>>year;

if((year%4==0 && year%100!=0)||year%400==0)
{
    cout<<"it's a leap year"<<endl;

}

else{cout<<"it's not a leap year"<<endl;}

getch();
return 0;

}
