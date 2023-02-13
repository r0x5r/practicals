#include<iostream>
using namespace std;
class same{
    public:
    same(){
        cout<<"constructor is invoked"<<endl;
    }
    ~same(){
        cout<<"destructor is invoked"<<endl;
    }
};
int main(){
    same s;
    return 0;
}