#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a;
    cin>>b;
    int x= a-b;
    try{
        if(x!=0){
            cout<<"result(a/x) = "<<a/x<<endl;
        }
        else{
            throw(x);
        }
    }
    catch(int i){
        cout<<"exception caught divided by zero";
    }
    cout<<"END"<<endl;
    return 0;
}