#include<iostream>
using namespace std;
class Employee{
    private:
    int id;
    string name;
    public:
    Employee(int i=0,string n=" "){
        id = i;
        name = n;
    }
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
};
 class FulltimeEmployee : public Employee{
private:
int salary;
public:
FulltimeEmployee(int i,string n,int s):Employee(i,n){
    salary = s;
}
int getsalary(){
    return salary;
}
 };
 class ParttimeEmployee : public Employee{
    private:
    int wage;
    public:
    ParttimeEmployee(int i,string n,int w):Employee(i,n){
    wage=w;
    }
int getwages(){
    return wage;
}
 };
 int main(){
    ParttimeEmployee f(101,"Raman",300);
    FulltimeEmployee p(102,"sayam",30000);
    cout<<"Salary of "<<f.getName()<<" is "<<f.getwages()<<endl;
    cout<<"Wages of "<<p.getName()<<" is "<<p.getsalary()<<endl;
 }

//------------------------------------------------------------------------------------------------------------
// Output--
// Salary of Raman is 300
// Wages of sayam is 30000
