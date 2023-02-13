#include<iostream>
using namespace std;
class cube{
    public:
    cube(){
        cout<<"constructor is invoked"<<endl;
    }
    ~cube(){
        cout<<"destructor is inkvoked"<<endl;
    }

};
int main(){    
    
    cube* arr= new cube[2];
    delete[] arr;
    return 0;
}