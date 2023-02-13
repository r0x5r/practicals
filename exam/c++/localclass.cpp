#include <iostream>
using namespace std;
void foo()
{
    class local_class
    {
    public:
        local_class()
        {
            cout << "this is local classs" << endl;
        }
    };
    local_class lc;  
}
int main(){
    foo();
    return 0;
}