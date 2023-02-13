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
    void specs(){
        cout<<"wiegth of your dog";
        cin>>weight;
        cout<<"age of dog";
        cin>>age;
    }

};

class dog:public animal{

};
int main(){
    dog d;
    d.speak();
    d.specs();
    cout<<"age of dog is "<<d.age<<endl;
    cout<<"weight of dog is "<<d.weight<<endl;
    return 0;
}