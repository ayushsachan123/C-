#include<iostream>
using namespace std;


class Test{
int x=10;
int y=20;

public:
Test(int a,int b){
    x=a;
    y=b;
}
    
Test():Test(1,1){//It will call parametarized constructor
                 //If you want to write the same logc in non-paramaterized
                 //constructor so instead of writing again call parametized constructor

}
};

int main(){

    return 0;
}
