//USING CONSTRUCTOR
#include<iostream>
#include<string>    
using namespace std;
class teacher{
    private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept){
        dept= newDept;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }
    void getInfo(){
        cout<<"Teacher name "<<name<<endl;
        cout<<"Teacher subject "<<subject<<endl;
        cout<<"Teacher Department "<<dept<<endl;
    }


    teacher(string s, string d, string sub, double sal)
    {
        name = s;
        dept = d;
        subject = sub;
        salary = sal;
    }
};
int main()
{
    teacher t1("Praguni","CSE","C++",2500000);
    t1.setSalary(300000);
    cout<<"Salary is "<<t1.getSalary()<<endl;
    t1.getInfo();
    return 0;


}
// Teacher(string name, string dept,string subject)