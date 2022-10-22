#include<bits/stdc++.h>
using namespace std;

int main(){

//bitse -> 1bit
//It only store one or zero
//the digit 1 is known as set bit in the terms of the computer

/*all
any
count
flip
none
set
reset
size
test*/

bitset<5> bt;
cin>>bt; //10101 

//all
//if all the bits are set then return true like 11111
cout<<bt.all(); //return a true or false 

//any
//true
cout<<bt.any(); // if bt-> 10000 if any bit is set then it return true
//false
cout<<bt.any(); // if bt-> 00000

//count
//for bt-> 10100
//prints 2 bcz set bit is 2
cout<<bt.count();//prints the number of set bits

//flip
// 1 becomes 0 and 0 becomes 1
//bt -> 10100
bt.flip(2); //bt will become 10000

//none
//if none is set, then true, else false
//bt ->10000
cout<<bt.none(); //false
//bt ->00000
cout<<bt.none(); // true
 
//set
bt.set(); //then entire 5 position will fill with 1
bt.set(2); //set the second index
bt.set(2,0); // it will set the second index to 0

//reset
bt.reset(); //turns all the index to 0

bt.reset(2);//turn the second index to 0

//size
cout<<bt.size()<<endl; //prints 5

//test
cout<<bt.test(1); // check if the bit is set or not at index 1

    return 0;
}
