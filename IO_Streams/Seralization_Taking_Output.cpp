#include<iostream>
#include<fstream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    string branch;
  friend ofstream & operator<<(ofstream &ofs,Student &s);
  friend ifstream & operator>>(ifstream &ofs,Student &s);
};
ifstream & operator>>(ifstream &ifs,Student &s){
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}
ofstream & operator<<(ofstream &ofs,Student &s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
}

int main(){
    Student s1;
s1.name="john";s1.roll=10;s1.branch="CSE";

ifstream ifs("Student.txt");

ifs>>s1;
cout<<"Name- "<<s1.name<<endl;
cout<<"Roll- "<<s1.roll<<endl;
cout<<"Branch- "<<s1.branch<<endl;
ifs.close();
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------
Output--
// Name- john
// Roll- 10
// Branch- CSE
