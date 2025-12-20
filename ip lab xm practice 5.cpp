//Take a student's marks as input and display their grade using this logic:
//80+ = A
//70–79 = B
//60–69 = C
//50–59 = D
//Below 50 = F

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
float marks;

cout<<"Enter marks:";
cin>>marks;

if(marks>80 && marks<100)

{
    cout<<"A"<<endl;
}

else if(marks>70 && marks<80)

{
    cout<<"B"<<endl;
}

else if(marks>60 && marks<70)

{
    cout<<"C"<<endl;
}

else if(marks>50 && marks<60)

{
    cout<<"D"<<endl;
}

else if(marks<50)

{
    cout<<"F"<<endl;
}

getch();
return 0;

}
