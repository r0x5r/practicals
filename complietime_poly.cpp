#include <iostream>
using namespace std;
class A
{
public:
    void sayhello()
    {
        cout << "helo lovee baabr" << endl;
    }
    int sayhello(string name,int n)
    {
        cout << "helo rohit " << name << endl;
        return n;
    }
    void sayhello(string name)
    {
        cout << "helo " << name << endl;
    }
};
int main()
{
    A obj;
    obj.sayhello();
}