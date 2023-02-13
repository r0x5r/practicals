#include<iostream>
using namespace std;
class a{
   public:
   void func1(){
    cout<<"i nside function1"<<endl;
   }
};
class b:public a{
    public:
    void func2(){
     cout<<"inside function 2"<<endl;
    }
};
class c: public b{
   public:
   void func3(){
    cout<<"inside function 3"<<endl;
   }
};
int main(){
    a obj1;
    obj1.func1();

    b obj2;
    obj2.func2();
    obj2.func1();
    
    c obj3;
    obj3.func3;
    

    return 0;
}