#include<iostream>
using namespace std;

int main(){
int x=10,y=0,z;
try{
if(y==0)
        throw string("you have done error Bro!!");
        z=x/y;
cout<<z<<endl;
}
catch(string e){
cout<<"Division by Zero "<<"error code: "<<e<<endl;
}
cout<<"Bye"<<endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Division by Zero error code: you have done error Bro!!
// Bye
