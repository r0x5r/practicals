#include<iostream>
using namespace std;
class cube{
    public:
    cube(){
        cout<<"constructor is invoekd"<<endl;

    }
    ~cube(){
        cout<<"decusturctor is invoked"<<endl;
    }

};
int main(){
    cube* arr=new cube[1];
    delete[] arr;
    return 0;
}