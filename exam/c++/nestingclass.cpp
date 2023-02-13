#include <iostream>
using namespace std;
class first
{
public:
    class second
    {
    public:
        void print_sec()
        {
            cout << "this is second class" << endl;
        }
    };
    void print_first()
    {
        cout << "this is first class" << endl;
    }
};
int main(){
    first f;
    first::second s;
    f.print_first();
    s.print_sec();

return 0;
}