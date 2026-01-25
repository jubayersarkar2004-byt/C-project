//Write a program to take two integer inputs from the user
// and swap their values using a temporary variable.
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

int a,b,temp;

cout<<"Enter two integer:";
cin>>a>>b;

temp=a;
a=b;
b=temp;

cout<<"a="<<a<<endl;
cout<<"b="<<b;

getch();
return 0;
}

