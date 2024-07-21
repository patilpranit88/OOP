#include<iostream>
using namespace std; 
int i=30;
int main(){
   int i=20;
    cout<<"local variables"<<i<<endl;
    cout<<"global variables"<<::i<<endl;
    return 0;
}