#include<iostream>
#include<fstream>
using namespace std;

int main(){
ofstream ofs("my.txt");
ofs<<"John"<<endl;
ofs<<25<<endl;
ofs<<"cs"<<endl;

ofs.close();
}

