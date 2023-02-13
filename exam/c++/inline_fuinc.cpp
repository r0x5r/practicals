#include <iostream>
using namespace std;
inline int cube(int s) // function definition 
{
    return s*s*s;
}
int main()
{
    cout << "The cube of 3 is: " << cube(3) << "\n"; //faction  call
    return 0;
} //Output: The cube of 3 is: 27