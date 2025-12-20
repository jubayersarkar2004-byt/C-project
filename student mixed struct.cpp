#include<iostream>
using namespace std;

struct student
{ string name;
  int id;
  double cgpa;

               // assinged variable
  void setName(string n)
  {
      name=n;
  }

  void setId(int i)
  {
      id=i;
  }
   void setCgpa(double c)
   {
       if(c>=0 && c<=4)
       {
           cgpa=c;
       }
       else{
           cout<<"Invalid value!";
       }
   }


             //assinged variable in one function
   void setAll(string n,int i,double c)
   {
       setName(n);
       setId(i);
       setCgpa(c);
   }

        //using return in function
  string getName()
  {
      return name;
  }
  int getId()
   {
       return id;
   }
   double getCgpa()
   {
       return cgpa;
   }

        //a void function for print return value
  void display()
  {
      cout<<"Name="<<name<<endl;
      cout<<"ID:"<<id<<endl;
      cout<<"CGPA:"<<cgpa<<endl;
  }
  void checkScholarship()
  {
      if(cgpa>=3.75)
      {
          cout<<"Eligible for scholarship."<<endl;
      }
      else{
        cout<<"Not eligible for scholarship.";
      }
  }
};

int main()
{
    student s1,s2;

s1.setAll("Zubas",101,3.6);
cout<<"s1 Details:"<<endl;
 s1.display();
 s1.checkScholarship();

 cout<<"\ns2 Details:"<<endl;
 s2.setName("Ahmed");
 s2.setId(105);
 s2.setCgpa(3.80);

 cout<<"Name="<<s2.name<<endl;
  cout<<"ID:"<<s2.id<<endl;
   cout<<"CGPA:"<<s2.cgpa<<endl;

   s2.checkScholarship();

     return 0;

}
