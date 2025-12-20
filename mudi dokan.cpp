
//Write a program to calculate the daily average sale of a
// varity shop for a week.After that find out the number of days having less than the daily average sales

#include<iostream>
using namespace std;

int main()
{
float sales[7];
float sum=0,avg;
int count=0;

//input
cout<<"Enter the sales of 7 days"<<endl;
 for(int i=0;i<7;i++)
 {  cout<<"\nsale"<<i+1<<"=";
     cin>>sales[i];
     sum+=sales[i];
 }

// 7 days daily average

avg=(float)sum/7;
cout<<"The average sales of 7 days:"<<avg<<endl;

// count the less than the daily average sale

for(int i=0;i<7;i++)
{
    if(avg>sales[i]){
        count++;
    }
}

    cout<<"the number of lees sales of 7 days ="<<count++<<endl;

   return 0;


}
