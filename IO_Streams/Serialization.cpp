#include<iostream>
#include<fstream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    string branch;
  friend ofstream & operator<<(ofstream &ofs,Student &s);
};

ofstream & operator<<(ofstream &ofs,Student &s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
}
int main(){
    Student s1;
s1.name="john";s1.roll=10;s1.branch="CSE";

ofstream ofs("Student.txt",ios::trunc);

ofs<<s1;
ofs.close();
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
Output--
N/A
