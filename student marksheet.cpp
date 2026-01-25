//you need to take the marks of n courses for a students, after that you need to provide some decision
//based on the average marks as follows
//
 #include<iostream>

 using namespace std;
int main()
{
 int n;

 cout<<"enter the number of students:";
 cin>>n;

float arr[n];
float sum=0;

for(int i=0;i<n;i++)
{
    cout<<"Marks"<<i+1<<"=";
    cin>>arr[i];
    sum+=arr[i];
}
float avg;
avg=(float)sum/n;
cout<<"The total average marks:"<<avg<<endl;


if(avg>80 && avg<100)
{ cout<<"GOOD performance"<<endl;}
else if(avg>70 &&avg<80)
{
   cout<<"Moderate performance"<<endl;

}
else if(avg>50 && avg<70)
    {
        cout<<"cold performance"<<endl;

     }
     else if(avg<50)
      {
          cout<<"tumi fail,valo kore poro masud"<<endl;

     }

    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++)  //whenever we find out max min we have to declare i=1
    {
        if(max<arr[i])
        {
            max=arr[i];

        }
        else if(min>arr[i])
        {
            min=arr[i];

        }


    }
    cout<<"Maximum Numbers:"<<max<<endl;
    cout<<"Minimum Numbers:"<<min<<endl;



    return 0;

}

