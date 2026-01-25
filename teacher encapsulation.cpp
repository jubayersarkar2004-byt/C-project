#include<iostream>
using namespace std;

class Employee{

private:
     int empCode;
    string name;
    double baseMonthlySalary;

public:
    // Empty Constructor
    Employee() {
        empCode = 0;
        name = "";
        baseMonthlySalary = 0.0;
    }

    // Parameterized Constructor
    Employee(int code, string n, double salary) {
        empCode = code;
        name = n;
        baseMonthlySalary = salary;
    }

    // Getters
    int getEmpCode() { return empCode; }
    string getName() { return name; }
    double getBaseSalary() { return baseMonthlySalary; }

    // Setters
    void setEmpCode(int code) { empCode = code; }
    void setName(string n) { name = n; }
    void setBaseSalary(double salary) { baseMonthlySalary = salary; }


// calculation

double  calculateNetMonthlySalary()
{
    double houseAllowance=  baseMonthlySalary*0.15;
    double medicalAllowance=  baseMonthlySalary* 0.5;
   double  grossSalary=  baseMonthlySalary + houseAllowance+medicalAllowance;

   // tax calculate

 double  tax= grossSalary * 0.1;

  double netSalary= grossSalary - tax;

  if(netSalary>=45000)
  {
      netSalary-=2000;
  }

  return netSalary;




}

// Display Method
    void display() {
        cout << "---------------------------------\n";
        cout << "Employee Code      : " << empCode << endl;
        cout << "Name               : " << name << endl;
        cout << "Base Salary (BDT)  : " << baseMonthlySalary << endl;
        cout << "Net Salary (BDT)   : " << calculateNetMonthlySalary() << endl;
    }







};

int main()
{
    // Using parameterized constructor
    Employee e1(101, "Rahim", 40000);
    Employee e2(102, "Karim", 60000);

    // Display employee details
    e1.display();
    e2.display();

    // Using empty constructor + setters
    Employee e3;
    e3.setEmpCode(103);
    e3.setName("Jamal");
    e3.setBaseSalary(50000);
    e3.display();

    return 0;
}




