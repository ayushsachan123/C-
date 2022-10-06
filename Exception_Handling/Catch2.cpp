#include<iostream>
using namespace std;

class MyException1{

};
class MyException2: public MyException1{

};
int main(){
    try{
        throw MyException1();

    }
    catch(MyException2 e){
cout<<"MyException2 Catch"<<endl;
    }
    catch(MyException1 e){
        cout<<"MyException1 Catch"<<endl;
    }
    catch(...){
        cout<<"All Catch"<<endl;
    }
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// MyException1 Catch
