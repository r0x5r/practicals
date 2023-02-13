#include <iostream>
using namespace std;
template <typename T>
class MyClass
{
public:
    T data;
    void setData(T x) { data = x; }
    T getData() { return data; }
};
int main()
{
    MyClass<int> myObject;
    myObject.setData(5.2);
    cout << myObject.getData() << endl;
}