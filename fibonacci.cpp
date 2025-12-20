#include<iostream>
using namespace std;

void generateFibonacci(int fib[],int n)
{
    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<n;i++)
    {
       fib[i]=fib[i-1]+fib[i-2];
    }


}


void printFibonacci(int fib[],int n)
{
    cout<<"Fibonacci series:";
    for(int i=0;i<n;i++)
    {
        cout<<fib[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
     cout<<"Enter a number of term:";
     cin>>n;

     int fib[n];
    generateFibonacci(fib,n);
    printFibonacci(fib,n);

    return 0;

}
