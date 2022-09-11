#include <iostream>
using namespace std;

class Student
{
private:
    int Rollno;
    string Name;
    float Physics, Chemistry, Maths;

public:
    Student();
    Student(int R, string N, float P, float C, float M);

    void setRollno(int R);
    void setName(string N);
    void setPhysics(float P);
    void setChemistry(float C);
    void setMaths(float M);

    int getRollno();
    string getName();
    float getPhysics();
    float getChemistry();
    float getMaths();

    int TotalMarks();
    char Grade();
};


Student::Student(){
    Rollno=1;
    Name=" ";
    Physics=0;
    Chemistry=0;
    Maths=0;
}
Student::Student(int R, string N, float P, float C, float M)
{
    Rollno = R;
    Name = N;
    Physics = P;
    Chemistry = C;
    Maths = M;
}
void Student::setRollno(int R)
{
    Rollno = R;
}
void Student::setName(string N){
    Name = N;
}
void Student::setPhysics(float P){
    if(P<=100){
    Physics = P;
    }
    else{
        cout<<"You Have entered Marks of Physics Greater than 100 "<<endl;
        cout<<"Please Recheck"<<endl;
    }
}
void Student::setChemistry(float C){
    if(C<=100){
    Chemistry = C;
    }
    else{
        cout<<"You Have entered Marks of Chemistry Greater than 100 "<<endl;
        cout<<"Please Recheck"<<endl;
    }
}
void Student::setMaths(float M){
    if(M<=100){
    Maths = M;
    }
    else{
        cout<<"You Have entered Marks of Maths Greater than 100 "<<endl;
        cout<<"Please Recheck"<<endl;
    }
}
int Student::getRollno()
{
    return Rollno;
}
string Student::getName()
{
    return Name;
}
float Student::getPhysics()
{
    return Physics;
}
float Student::getChemistry()
{
    return Chemistry;
}
float Student::getMaths()
{
    return Maths;
}
int Student::TotalMarks()
{
    return Physics + Chemistry + Maths;
}
char Student::Grade()
{
    float average = TotalMarks()*100 / 300;
    if (average<=100 && average >= 80)
    {
        cout<<average<<"%"<<endl;
        return 'A';
    }
    else if (average > 60 && average < 80)
    {
        cout<<average<<"%"<<endl;
        return 'B';
    }
    else
    {
        cout<<average<<"%"<<endl;
        return 'C';
    }
}


int main()
{
    Student s;
    int Roll;
    string N;
    int P, C, M;

    cout << "Enter Roll number of a Student:- ";
    cin >> Roll;
    cout << "Enter Name of a Student:- ";
    cin >> N;
    cout << "Enter marks in 3 subjects should be less than 100:- ";
    cin >> P >> C >> M;

    s.setRollno(Roll);
    s.setName(N);
    s.setPhysics(P);
    s.setChemistry(C);
    s.setMaths(M);

    cout << "Roll no is:- " << s.getRollno() << endl;
    cout << "Name is:- " << s.getName() << endl;
    cout << "Marks of physics:- " << s.getPhysics() << endl;
    cout << "Marks of Chemistry:- " << s.getChemistry() << endl;
    cout << "Marks of Maths:- " << s.getMaths() << endl;
    cout << "Total Marks:- " << s.TotalMarks() << endl;
    cout << "Grade:- " << s.Grade() << endl;

    return 0;
}

//----------------------------------------------------------------------------------------------------------
// Output--
// Enter Roll number of a Student:- 44
// Enter Name of a Student:- Ayush
// Enter marks in 3 subjects should be less than 100:- 90 80 95
// Roll no is:- 44
// Name is:- Ayush
// Marks of physics:- 90
// Marks of Chemistry:- 80
// Marks of Maths:- 95
// Total Marks:- 265
// Grade:- 88%
// A
