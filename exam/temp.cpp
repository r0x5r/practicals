#include<iostream>
using namespace std;
class demo{
    private:
    static int x;
    public:
    static void fun(){
        cout<<"the value of x is "<<x<<endl;
        x++;
    }

};
int demo::x=10;
int main(){
    demo t;
    t.fun();
    t.fun();
    t.fun();
    return 0;
}