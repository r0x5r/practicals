#include<iostream>
using namespace std;
class demo{
    private:
    static int a; //static data member means variable
    public:
    static void fun() //statis member function 
    {
        cout<<"the value of x is: "<<a<<endl;
    }
};
int demo::a=10; //static data member out class defintition
int main(){
    demo a;
    a.fun();
    return 0;
}