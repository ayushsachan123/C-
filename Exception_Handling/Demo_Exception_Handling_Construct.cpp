#include<iostream>
using namespace std;
int main(){
int x=10,y=0,z;
try{
    if(y==0)
    throw 404;
z=x/y;
cout<<z<<endl;
}
catch(int e){
cout<<"Division by Zero "<<"error code: "<<e<<endl;
}
cout<<"Bye"<<endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Division by Zero error code: 404
// Bye
