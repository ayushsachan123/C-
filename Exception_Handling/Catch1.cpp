#include<iostream>
using namespace std;
int main(){
    try{
        throw string("hi");

    }
    catch(int e){
cout<<"Int Catch"<<endl;
    }
    catch(double e){
        cout<<"Double Catch"<<endl;
    }
    catch(...){
        cout<<"All Catch"<<endl;
    }
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// All Catch
