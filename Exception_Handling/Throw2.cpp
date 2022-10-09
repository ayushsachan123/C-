#include<iostream>
using namespace std;

class MyException:exception{

};
int division(int x,int y){
    if(y==0){
        throw MyException();
    }
    return x/y;
}

int main(){
    int x=10,y=0,z;
  try{
    z=division(x,y);
    cout<<z<<endl;
  }
  catch(MyException e){
    cout<<"Division by zero"<<endl;
  }
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Division by zero
