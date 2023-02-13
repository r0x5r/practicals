#include<iostream>
using namespace std;
class rec{
    public:
    float area;
    rec(){
        area=0;
    }
    rec(int a,int b){
        area=a*b;
    }
    void display(){
      cout<<"area of rectangle is "<<area<<endl;
    }
    
};

int main(){
   
    rec r(10,20);
    
    r.display();
    return 0;
}