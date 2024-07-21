#include<iostream>
using namespace std; 
class shape{
    public:
    void display(){
        cout<<"this is shape of class"<<endl;
    }
};
    class circle : public shape{
        public:
        void displaycircle(){
            cout<<"this is a shape of circle"<<endl;
        }
    };

int main(){
     shape s;
     circle c;
     s.display();
     c.displaycircle();
    
    return 0;
}