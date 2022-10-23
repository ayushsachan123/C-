#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class Car{
    public:
   virtual void start()=0;
   virtual void stop()=0;
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
  //  Car c; we cannnot create the object of abstract class
Car *c = new Tata();
c->start();
c->stop();
cout<<endl;
c= new Mahindra();
c->start();
c->stop();
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Tata Started
// Tata Stopped

// Mahindra  Started
// Mahindra Stopped
