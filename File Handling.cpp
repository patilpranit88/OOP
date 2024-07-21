#include<iostream>
#include<fstream>
using namespace std; 

int main(){
    ofstream outf("sample.txt");
    cout<<"enter the item name"<<endl;
    char name[20];
    cin>>name;
    outf<<name;
    cout<<"enter item cost"<<endl;
    float cost;
    cin>>cost;
    outf<<cost;
    outf.close();
    ifstream inf("sample.txt");
    inf>>name;
    inf>>cost;
    cout<<endl;
    cout<<"item name : "<<name<<endl;
    cout<<"item cost : "<<cost<<endl;
    inf.close();

    
    return 0;
}