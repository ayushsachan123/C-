#include<iostream>
using namespace std;
struct Demo{
    int x;
    int y;
    void Display(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
Demo d;
d.x=10;
d.y=20;
d.Display(); 
}

//---------------------------------------------------------------------------------------------------------------
//Structure have everything is public by default but class have everything private by default
// Output--
// 10 20
