#include<iostream>
using  namespace std;
class name{
    private:
    int a,b;
    public:
    name(int x,int y){//parameterized constructor
        a=x;
        b=y;
    }
   /* name(const name &n) { //copy constructor
    a = n.a;
    b = n.b;
   }
*/
    void display(){
        cout<<a<<"and"<<b<<endl;
    }
};
int main(){
    name n(10,30);
    //name n2(n1);
    n.display();
    return 0;
}