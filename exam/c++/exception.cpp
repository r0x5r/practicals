#include <iostream>
using namespace std;
int divide(int x, int y)
{
    if (y == 0)
    {
        throw runtime_error("division by zeror");
    }
    else
    {
        return x / y;
    }
}

int main()
{
    try
    {
        cout << divide(10,0) << endl;
    }
    catch (runtime_error &e)
    {
        cout << "error" << e.what() << endl;
    }

    return 0;
}