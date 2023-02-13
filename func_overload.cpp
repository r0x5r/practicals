#include<iostream>
using namespace std; //function overloading
class A{
    public: 
    void func(){
        cout<<"this is class A"<<endl;
    }
};
class B:public A{
    public:
    void func(){
        cout<<"this is class B"<<endl;
    }
};
int main(){
    A _a;
    B _b;
    _b.A::func();
    // _a.func();
    _b.func();
    return 0;
}