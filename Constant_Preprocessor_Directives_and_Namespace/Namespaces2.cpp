#include<iostream>
using namespace std;

namespace First{
void fun(){
    cout<<"First"<<endl;
}
};

namespace Second{
void fun(){
    cout<<"Second"<<endl;
}
}; 

using namespace First;
int main(){
    fun();
    Second::fun();
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// First
// Second
