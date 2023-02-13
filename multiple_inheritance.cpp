#include<iostream>
using namespace std;
class a{
   public:
   void func(){
    cout<<"inside function1"<<endl;
   }
};
class b{
    public:
    void func(){
     cout<<"iinside function 2"<<endl;
    }
};
class c:public a,public b{
   
};
int main(){
   c obj;
obj.a::func();
    obj.b::func();

    return 0;
}
