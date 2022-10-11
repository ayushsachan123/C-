#include<iostream>
using namespace std;
class Student{
    public :
    int rollno;
    string name;
    static int addno;
   Student(string n){
    name=n;
    addno++;
    rollno=addno;
   }
   void display(){
    cout<<"Name is "<<name<<endl<<"Rollno. is "<<rollno<<endl;
   }
};
int Student::addno=0;
int main(){
Student s1("John");
Student s2("Ravi");
Student s3("Raman");
Student s4("Raman");
Student s5("John");
s1.display();
s3.display();
cout<<"Number of Admissions "<<Student::addno<<endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Name is John
// Rollno. is 1
// Name is Raman
// Rollno. is 3
// Number of Admissions 5
  


