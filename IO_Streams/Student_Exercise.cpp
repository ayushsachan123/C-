#include<iostream>
#include<fstream>
using namespace std;

class Items{
    public:
    string Name;
    int Price;
    int Quantity;
Items(){}
Items(string n,int p,int q);

friend ofstream & operator<<(ofstream &ofs,Items &i);
friend ifstream & operator>>(ifstream &ifs, Items &i); 
friend ostream & operator<<(ostream &os,Items &i);

};

ofstream & operator<<(ofstream &ofs, Items &i){
ofs<<i.Name<<endl;
ofs<<i.Price<<endl;
ofs<<i.Quantity<<endl;
return ofs;
}

ifstream & operator>>(ifstream &ifs,Items &i){
    ifs>>i.Name>>i.Price>>i.Quantity;
    return ifs;
}

ostream & operator<<(ostream &os,Items &i)
{
os<<i.Name<<endl<<i.Price<<endl<<i.Quantity<<endl;
return os;
}

Items::Items(string n,int p,int q){
    Name=n;
    Price=p;
    Quantity=q;
}

int main(){
    int n;
    string name;
    int price;
    int qty;
    cout<<"Enter nuber of items-";
    cin>>n;
    Items *list[n];
    cout<<"Enter All Items"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1 <<"Item name ,price ,Quantity"<<endl;
        cin>>name;
        cin>>price;
        cin>>qty;
        list[i]=new Items(name,price,qty);
    }
     ofstream ofs("Items.txt");
    for(int i=0;i<n;i++){
        ofs<<*list[i];
    }
    
    Items i1;

    ifstream ifs("Items.txt");
    for(int i=0;i<n;i++){
      ifs>>i1;
   cout<<"Item "<<i<<i1<<endl;
    }
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------
// Output--
// Enter nuber of items-2
// Enter All Items
// Enter 1Item name ,price ,Quantity
// Oil 100 1
// Enter 2Item name ,price ,Quantity
// milk 60 1
// Item 0Oil
// 100
// 1

// Item 1milk
// 60
// 1
