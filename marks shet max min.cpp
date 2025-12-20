#include<iostream>
#include<conio.h>

using namespace std;
 int main()
 {

int n;

cout<<"Enter Number of students:";
cin>>n;

float marks[n];

  int sum=0;
            //input marks
for(int i=0;i<n;i++)
{
    cout<<"marks"<<i+1<<"=";
    cin>>marks[i];
    sum+=marks[i];
}

cout<<"The total marks of"<<" "<<n<<" "<<"students:"<<sum<<endl;
double avg=(double)sum/n;
cout<<"The average marks of"<<" "<<n<<" "<<"students:"<<avg<<endl;


// max min

int max=marks[0];
int min=marks[0];
int count_1=0;
int count_2=0;
for(int i=0;i<n;i++)
 {
  if(max<marks[i])
  {   max=marks[i];
      count_1++;
  }
   else if(min>marks[i])
   { min=marks[i];
       count_2++;
   }
 }

cout<<"Maximum numbers:"<<max<<endl;
cout<<"Minimum numbers:"<<min<<endl;

cout<<"The count of maximum number:"<<count_1<<endl;
cout<<"The count of minimum number:"<<count_2<<endl;

getch();

return 0;

 }
