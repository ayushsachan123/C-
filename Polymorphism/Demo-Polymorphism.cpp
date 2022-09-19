#include<iostream>
using namespace std;
class Car{
    public:
   virtual void start(){
    cout<<"Car stated"<<endl;
   }
   virtual void stop(){
    cout<<"Car stopped"<<endl;
   }
};
class Tata :public Car{
    public:
    void start(){
        cout<<"Tata Started"<<endl;
    }
    void stop(){
        cout<<"Tata Stopped"<<endl;
    }
};
class Mahindra: public Car{
    public:
    void start() {
        cout<<"Mahindra  Started"<<endl;
    }
    void stop(){
        cout<<"Mahindra Stopped"<<endl;
    }
};
int main(){
Car *c = new Tata();
c->start();
c->stop();
cout<<endl;
c= new Mahindra();
c->start();
c->stop();
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// ata Started
// Tata Stopped

// Mahindra  Started
// Mahindra Stopped
