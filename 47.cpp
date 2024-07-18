#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;
        void changeDept(string newDept){
            dept = newDept;
        }
        void setSalary(double s){
            salary = s;
        }
        double getSalary(){
            return salary;
        }
        void getInfo(){
            cout <<"Teacher name: "<< name<<endl;
            cout<<"Teacher subject: "<<subject<<endl;
        }
};
int main(){
    Teacher t1;
    t1.name = "Sarang";
    t1.subject = "Maths";
    t1.changeDept("CSE");
    cout << t1.name <<endl;
    t1.getInfo();

    t1.setSalary(4500);
    cout<< t1.getSalary()<<endl;
}