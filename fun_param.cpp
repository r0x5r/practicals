#include<iostream> //function overload with argument 
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"hello love babr"<<endl;
        
    }
    void sayhello(string name){
        cout<<"hello"<<name<<endl;
    }
};
int main(){
    A obj;
    string name="bitch";
    obj.sayhello(name);
    obj.sayhello();
}