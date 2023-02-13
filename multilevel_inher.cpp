#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"speaking" <<endl;
    }

};

class dog:public animal{

};
class german:public dog{

};
int main(){
    german g;
    g.speak();
    dog d;
    d.speak();
    cout<<d.age<<endl;
    cout<<d.weight<<endl;
    return 0;
}