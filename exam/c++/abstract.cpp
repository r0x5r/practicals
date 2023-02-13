// program to print a text

#include <iostream> //funtion overriding  //run time polymorphism //abstract class becuase it have one virtual function  late binding 
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"base class"<<endl;
    } //function protype 
};
class deri:public base{
    public:
    void print(){
        cout<<"derived"<<endl;
    }
};
int main(){
    deri d1;
    // base * base1=&d1;
    // base1->print();
    // d1.print();
    base *base1=&d1;
    base1->print();
    d1.print();
    return 0;
}