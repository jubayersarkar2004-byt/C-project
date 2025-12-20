//f to c. c to f

#include<iostream>
using namespace std;

void convertC(float f)
{
    cout<<"Enter the Temperature in Farenheit:";
    cin>>f;
    float celcius=(float)(f-32)/1.8;

    cout<<"Convert to celcius:"<<celcius<<endl;
}

void conVertF(float c)
{
    float farenheit=(float)(1.8*c)+32;

    cout<<"Convert to farenhiet:"<<farenheit;
}

int main()
{   float f;
    float c;

    cout<<"Enter the Temperature in celcius:";
    cin>>c;

   convertC(f);
   conVertF(c);


    return 0;

}













