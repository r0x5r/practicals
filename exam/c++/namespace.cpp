#include <iostream>
using namespace std;
namespace first
{
    void sayhello()
    {
        cout << "helllo first" << endl;
    }
} 
namespace second
{

    void sayhello()
    {
        cout << "hellio second" << endl;
    }
}
int main()
{
    first::sayhello();
    second::sayhello();
    return 0;
}