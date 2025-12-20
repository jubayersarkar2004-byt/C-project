//Write a program to check if a number is positive, negative, or zero using if-else.
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

int n;
                  //input integer
cout<<"Enter an integer:"<<endl;
cin>>n;

if(n>0)     //using conditional statement
{
    cout<<"it's a positive number"<<endl;
}
 else if(n<0)
 {
     cout<<"it's a negative number"<<endl;
 }
else if(n==0)

{
    cout<<"it's a positive number"<<endl;
}

getch();
return 0;

}
