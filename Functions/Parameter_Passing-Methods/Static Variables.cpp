#include<iostream>
using namespace std;
void fun(){
    static int v=0;
    int a=5;
    v++;
    cout<<a<<" "<<v<<endl;

}
int main(){
fun();
fun();
fun();
}

//-------------------------------------------------------------------------------------------------------------
// Output--
// 5 1
// 5 2
// 5 3
