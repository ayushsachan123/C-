#include<bits/stdc++.h>
using namespace std;

int main(){
    
multiset<int>ms;

ms.insert(1);
ms.insert(1);
ms.insert(2);
ms.insert(2);
ms.insert(3);
//st ->{1,1,2,3,3}

for(auto it: ms){
    cout<<it<<endl;
}
cout<<endl;


//find how many times 2 occur
cout<<"print how many times 2 occurs: "<<ms.count(2);
cout<<endl;
cout<<endl;

ms.erase(2);  //all the instances will be erased i.e all the element which is 2

for(auto it: ms){
    cout<<it<<endl;
}

auto it=ms.find(2);//return an iterator pointing to the first element of 2

ms.clear(); //delete entire set
ms.erase(ms.begin(),ms.end()); //delete entire set
//log n in size

ms.erase(ms.find(2));
//ms.erase(ms.find(2),ms.find(2)+2);

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// 1
// 1
// 2
// 2
// 3

// print how many times 2 occurs: 2

// 1
// 1
// 3
