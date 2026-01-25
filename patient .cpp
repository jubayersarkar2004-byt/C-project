#include<iostream>
using namespace std;

int main()
{

string names[8];
                     //user input
cout<<"Participant names:"<<endl;
for(int i=0;i<8;i++)
 { cout<<i+1<<"."<<"Enter name"<<":";
    cin>>names[i];
 }
 char c;

 if(c<2)  // error define
 {
     cout<<"Too short.Try again:"<<endl;
 }
   //output
  for(int i=0;i<8;i++)
{
    cout<<names[i]<<" ";


}


//name analysis;

cout<<"Name Analysis:"<<endl;
for(int i=0;i<8;i++)
{
    cout<<1+1<<".";
    cin>>names[i];

}


















    return 0;

}

