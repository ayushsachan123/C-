#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream ifs("my.txt");//Or ifstream ifs;
                           //ifs.open("my.txt"

    //Checking the file is open or not   
  if(ifs)cout<<"File is opened"<<endl; //Or  if(ifs.is_open())               
    string name;           
    int rollno;
    string branch;
    ifs>>name>>rollno>>branch;
    ifs.close();
    cout<<"Name- "<<name<<endl;
    cout<<"Roll no.- "<<rollno<<endl;
    cout<<"Branch- "<<branch<<endl;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Name- John
// Roll no.- 25
// Branch- cs
