#include<iostream>
using namespace std;
class MyException :exception //build in class
{

};
int main(){
int x=10,y=0,z;
try{
if(y==0)
        throw MyException();
        z=x/y;
cout<<z<<endl;
}
catch(MyException e){
cout<<"Division by Zero "<<"error code: "<<endl;
}
cout<<"Bye"<<endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Division by Zero error code: 
// Bye
