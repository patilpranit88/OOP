#include<iostream>
using namespace std; 
class base{
    public:
    int a;
    base(){
        a=10;
    }
};
class b:public virtual base{};
class c:public virtual base{};
class d: public b, public c{};

int main(){
    d obj;
    cout<<"a ="<<obj.a<<endl;
    
    
    return 0;
}