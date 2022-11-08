#include<bits/stdc++.h>
#include<cstring>
using namespace std;

struct node {
    string s;
    int num;
    double doub;
    char x;

node(){
     s="";
    num=0;
    doub=0;
    x=' ';
}
    node(string x,int n,double d,char g)
    {
          s=x;
          num=n;
          doub=d;
          x=g;

    }

};

int main(){
    node st;
st.s="Ayush"; 
st.num=10;
st.doub=99.9;
st.x='A';

//also you can do this
node *st= new node("Ayush",99,99.9,'A');
//or
node st= node("Ayush",99,99.9,'A');

}
