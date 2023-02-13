#include <iostream>
using namespace std;
class sir
{
private:
    int sd;
    float marks;

public:
    sir(int i, float j)
    {
        sd = i;
        marks = j;
    }
    int getx() { return sd; }
    float gety() { return marks; }
};
int main()
{
    sir s1(10, 12.2);
    cout<<"sd  "<<s1.getx()<<"  marks "<<s1.gety();
    return 0;
}