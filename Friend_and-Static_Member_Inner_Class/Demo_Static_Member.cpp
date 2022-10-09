#include<iostream>
using namespace std;
class Test{
public:
int a;
static int count;
Test(){
    a=10;
    count++;
}
static int getcount(){
    return count;
}
};
int Test::count=0;
int main(){
    Test t1,t2;
  cout<<t1.count<<endl;
  cout<<t2.count<<endl;
  t1.count=25;
  cout<<t2.count<<endl;
  cout<<Test::count<<endl;

  cout<<Test::getcount()<<endl;
  cout<<t1.getcount()<<endl;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 2
// 2
// 25
// 25
// 25
// 25
