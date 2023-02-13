#include <iostream>
using namespace std;
class shape
{
private:
    int height;
    int width;

public:
//setter
    void setter(int h,int w)
    {
        height = h;
        width = w;
    }
    
//getter    
    int getter(int height,int width)
    {
        cout<<"height is " height<<"width is "<<width<<endl;
        
    }
    // int get_width()
    // {
    //     return width;
    // }
};
int main()
{  -
    shape s;
    s.setter(5,10);
    int width,height;
    cout << "height is " << s.getter(height) << endl;
    cout << "width is " << s.getter(width) << endl;
    return 0;
}