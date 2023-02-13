#include<iostream>
using namespace std;
 class get{
    private:
    int x;
    public:
   inline int getx(){
        return x;
    }
    void setx(int value){
        x=value;
    }

 };
 int main(){
    get x;
    x.setx(12);
    cout<<x.getx()<<endl;
   return 0;
 }