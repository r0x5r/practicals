#include <iostream>
using namespace std;
class hero
{
    // properties
private:
    int health;

public:
    char level;
    void print()
    {
        cout << level << endl;
    }

    int getH()
    {
        return health;
    }
    char getL()
    {
        return level;
    }

    void setH(int h)
    {

        health = h;
    }
    void setL(char ch)
    {
        level = ch;
    }
};

int main()
{
    // static allocation
    //  Hero a;
    //  cout<<"level is" <<a.level<<endl;
    //  cout<<"health is "<<a.getH()<<endl;

    // //dynamically
    // hero  *b= new hero;
    // cout<<"level is" <<(*b).level<<endl;
    // cout<<"health is "<<(*b).getH()<<endl;

    hero ramesh; // object cretion
    ramesh.health = 70;
    cout << "size of ramesh is " <<

        ramesh.level = 'A';
    cout << "helath is :" << ramesh.getH() << endl;
    ramesh.setH(70);
    cout << "level is " << ramesh.level << endl;

    return 0;
}