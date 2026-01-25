#include<iostream>
using namespace std;

int linerSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
       if(arr[i]==key)
       {
           return true;
       }

     }
    return false;
}


int mian()
{
    int n;
    cout<<"Enter array size:";
    cin>>n;
     int arr[n];
     int key;
     cout<<"Enter value to search";
     cin>>key;
    cout<<"Array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"elements:"<<i+1;
        cin>>arr[i];
    }

    bool found=linerSearch(arr,n,key);

    if(found)
    {
        cout<<"Elements found in the array:";
    }
    else{
        cout<<"not found";
    }
    return 0;
}

