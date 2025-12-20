// in struct teacher name ,id,salary,yearly-salary,tax,bonus calculate

#include<iostream>
using namespace std;

struct Teacher
{

    string name;
    int id;
    double salary;

    void setName(string n)
    {
        name=n;
    }
    void setId(int i)
    {
        id=i;
    }
    void setSalary(double s)
    {
        if(s>0)
        {
            salary=s;
        }
        else
        {
            cout<<"Invalid !";
        }
    }
    void setAll(string n, int i,double s)
    {
        setName(n);
        setId(i);
        setSalary(s);
    }
    // using return

    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    double getSalary()
    {
        return salary;
    }

    void  display()
    {
        cout<<"Name="<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
    void yearlySalary()
    {
        double yearly=salary*12;
        cout<<"Yearly salary="<<yearly<<endl;
    }
    void yearlyBonus()
    {
        double  bonus=(double)(salary/2)*2;
        cout<<"Total yearly bonus ="<<bonus<<endl;
    }
    void yearlyTax()
    {
        double yearly= (double) salary*12;
        if( yearly >400000)
        {
            double tax=(double)yearly*0.15;
            cout<<"Yearly Tax="<<tax<<endl;

        }
        else
        {
            cout<<"Not eligible for tax.";
        }
    }

};

int main()
{
    Teacher t1,t2;

    t1.setAll("Zubas",1001,10000);
    cout<<"T1 Details:"<<endl;
    t1.display();
    t1.yearlySalary();
    t1.yearlyBonus();
    t1.yearlyTax();

    cout<<"\nT2 Details:"<<endl;

    t2.setName("Alix");
    t2.setId(1004);
    t2.setSalary(50000);

    cout<<"T2 Name="<<t2.getName()<<endl;
    cout<<"T2 ID:"<<t2.getId()<<endl;
    cout<<"T2 Salary:"<<t2.getSalary()<<endl;

    t2.yearlySalary();
    t2.yearlyBonus();
    t2.yearlyTax();

    return 0;



}
