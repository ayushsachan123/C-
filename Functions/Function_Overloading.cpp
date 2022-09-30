#include<iostream>
using namespace std;
int add(int x,int y){
    return x+y;

}

int add(int x,int y,int z){
    return x+y+z;

}

float add(float x,float y){
    return x+y;

}

int main(){
    int a,b,c,d;
    cout<<"Enter the numbers";
    cin>>a>>b;
    c=add(a,b);
    d=add(a,b,c);
    cout<<c<<endl;
    cout<<d<<endl;

    float e,f;
    cout<<"Enter float numbers";
    cin>>e>>f;
    float g = add(e,f);
     cout<<g<<endl;
     
    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------
// Input--
// Enter the numbers 2 2
// Enter float numbers 2 2
// Output--
// 4
// 8
// 4
