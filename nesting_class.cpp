#include<iostream>
#include<conio.h>
using namespace std;
class first{
    public:
    class sec{
        public:
        void print_sec(){
        cout<<"second class"<<endl;
    }
};
void print_first(){
    cout<<"first class"<<endl;
    }
};
int main(){
    first f;
    first::sec s; //nesting class adding scope resolution operator
    f.print_first();
    s.print_sec();
    return 0;

}