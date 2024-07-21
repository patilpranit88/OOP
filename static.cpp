#include<iostream>
using namespace std; 
class item{
    static int count;
    int number;
    public:
    void getdat(int a){
        number = a;
        count ++;

    }
    void getcount(){
        cout<<"count"<<endl;
        cout<<count;
    }

};
int item:: count;
int main(){
    item a ,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdat(100);
    b.getdat(200);
    c.getdat(300);

    cout<<"after the reading the data"<<endl;

    a.getcount();
    b.getcount();
    c.getcount();
    
    return 0;
}
