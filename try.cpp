#include <iostream>


using namespace std;

int divide(int x, int y)
{
    if (y == 0)
    {
        throw runtime_error("Division by zero");
    }

    return x / y;
}

int main()
{
    try
    {
        cout << divide(10, 1) << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
