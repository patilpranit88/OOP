#include<iostream>
using namespace std; 
class base{
    public:
    void display(){
        cout<<"display base "<<endl;

    }
    virtual void show(){
        cout<<"show base"<<endl;
    } 
};
    class derived : public base{
        public:
        void display(){
            cout<<"display derived"<<endl;

        }
        void show(){
            cout<<"show derived "<<endl;

        }
    };


int main(){
    base b;
    derived d;
    base *bptr;
    cout<<"bptr points to base  class "<<endl;
    bptr=&b;
    bptr->display();
    bptr->show();
    cout<<"bptr points to derived class"<<endl;
    bptr=&d;
    bptr->display();
    bptr->show();

    
    return 0;
}