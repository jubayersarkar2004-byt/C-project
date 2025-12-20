//make a application for a production house,take 10 days product manufacture products, and  do sum and avg  the 10 days manufacture products.
//then give a feedback based of first 5 days between last 5 days production.
 // FDJ

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int products[10];

cout<<"Enter the production of 10 days:"<<endl;
int sum=0;

    //user input
for(int i=0;i<10;i++)
{
    cout<<"Products"<<i+1<<": ";
    cin>>products[i];
    sum+=products[i];

}
double avg;
 avg=(double)sum/10;

cout<<"The total production of 10 days:"<<sum<<" "<<"units"<<endl;
cout<<"The Total average production of 10 days:"<<avg<<" "<<"units"<<endl;

   // deciding is 1st 5 days or last 5 production large

int sum1=0;
int sum2=0;

//input first 5 days
for(int i=0;i<5;i++)
{
    sum1+=products[i];
}
cout<<"First 5 days total production: "<<sum1<<" "<<"units"<<endl;

// input last 5 days
for(int i=5;i<10;i++)
{
    sum2+=products[i];
}
cout<<"Last 5 days production:"<<sum2<<" "<<"units"<<endl; //decision

for(int i=0;i<10;i++)
{
    if(sum1<sum2)
    {
        cout<<"production decreasing"<<endl;
        break;
    }
    else if(sum1=sum2)
    {
        cout<<"production is same"<<endl;
        break;
    }
    else{ cout<<"production is improving"<<endl;
      break;
    }

}

cout<<"its devoleped by MD.JUBAYER SARKAR"<<endl;


getch();

    return 0;



}
