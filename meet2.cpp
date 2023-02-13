#include <iostream>
using namespace std;
// define a base class
class bird
{
public:
    // display function of the base class
   virtual void display()
    {
      cout << "I am the display function of the base class"<<endl;
    }
};
class parrot : public bird
{
public:
    // display function of the derived class

    // this function will display()

    // of base class override at run time

    void display()
{

        cout << "I am the display function of the derived class"<<endl;
    }
};
int main()

{
    // create objects of base and child classes
 

    parrot p;
    // call the diplay() function
    p.bird::display();
    p.display();
}