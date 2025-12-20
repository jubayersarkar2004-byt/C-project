// decide prime number in function
// sum 2 to n prime


#include<iostream>
#include<conio.h>
using namespace std;

bool primeDecide(int n)
{
    bool isPrime=true;
    if(n<=1)
    {
        isPrime=false;
    }
    else
    {
        for(int i=2; i<=n/2; i++)
            if(n%i==0)
            {
                isPrime=false;
            }


    }
    return isPrime;

}

void sumOfPrime(int n)
{
    cout<<"Enter a range to sum of prime number:";
    cin>>n;
    int sum=0;
    for(int i=2; i<=n; i++)
    {
        if(primeDecide(i))
        {
            sum+=i;
        }

    }


    cout<<"sum of prime number="<<sum<<endl;


}

int main()
{


    int n;
    cout<<"Enter a number to check prime or not prime:";
    cin>>n;

    sumOfPrime(n);


    if(primeDecide(n))
    {
        cout<<"it's a prime number"<<endl;
    }
    else
    {
        cout<<"it's not a prime number!"<<endl;

    }



    getch();
    return 0;
}
