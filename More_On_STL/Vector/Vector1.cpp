#include<bits/stdc++.h>
using namespace std;

int main(){

 //segmentation fault if you push_back 10^7 times

    vector<int>arr; // -> {} empty vector
    cout<<arr.size()<<endl;

    arr.push_back(0);  //{0}
    arr.push_back(2); //{0,2}

    cout<<arr.size()<<endl; // print 2

    arr.pop_back(); //->{0}

    cout<<arr.size()<<endl; // print 1

    //erase all the elements at once

    arr.clear();
    
    cout<<arr.size()<<endl; // print 0

    vector<int> vec1(4,0);  //->{0,0,0,0}

    vector<int>vec2(4,10); //->{10,10,10,10}

   //copying whole vector 2 in vector 3

    vector<int> vec3(vec2.begin(),vec2.end()); //->[)

   vector<int>ayush;

   //ayush.emplace_back(0); //->emplace back takes lesser time than push_back

   ayush.push_back(1);
   ayush.push_back(3);
   ayush.push_back(2);
   ayush.push_back(5);
   ayush.push_back(4); // -> {1,3,2,5,4}

   // i want only {1,3}

vector<int>ayush1(ayush.begin(),ayush.begin()+2); // -> {1,3}

//lower bound,upper bound

//swap swap(v1,v2)
//begin(),end(),rbegin(),rend()

   return 0;  
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 0
// 2
// 1
// 0
