#include <iostream>
#include <string.h>
using namespace std;
class employee
{
public:
    string name;
    int salary;

    employee(string n, int s)
    {
        this->name = n;
        this->salary = s;
    }

    void printdetials()
    {
        cout << "tha name of our first employee is " << this->name << "his salary" << this->salary << "dolars" << endl;
    }
};

int main()
{
    // string  name="harry";
    // cout<<"the name is "<<name<<endl;
    // cout<<"the lenght of sting is "<<name.length();

    // int a=34;
    // int *ptr;
    // ptr=&a;
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"the value of a is "<<*ptr<<endl;
    // cout<<"the value of a is "<<&a<<endl;

    employee har("harry contructor", 344);
    har.name = "harry";
    har.salary = 12;
    har.printdetials();
    return 0;
}