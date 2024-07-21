#include<iostream>
using namespace std;
//throw point outside the try block
void divided(int x,int y,int z){
    cout<<"we are inside the function"<<endl;
    if((x-y)!=0){
        int r=z/(x-y);
        cout<<"result = "<<r<<endl;

    }
    else
    {
        throw(x-y);
    }
}

int main(){
    try{
        cout<<"we are inside the try block"<<endl;
        divided(10,20,30);
        divided(10,10,20);
    }
    catch(int i){
        cout<<"caught the exception"<<endl;
    }
    return 0;
}